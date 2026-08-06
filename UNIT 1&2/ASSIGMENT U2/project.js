import React, { useState } from "react";
import { Card, CardContent } from "@/components/ui/card";
import { Button } from "@/components/ui/button";
import { Input } from "@/components/ui/input";

export default function CalendarApp() {
  const [events, setEvents] = useState([]);
  const [text, setText] = useState("");
  const [date, setDate] = useState("");
  const [weeklyGoal, setWeeklyGoal] = useState("");
  const [monthlyGoal, setMonthlyGoal] = useState("");

  const addEvent = () => {
    if (!text || !date) return;
    setEvents([...events, { text, date }]);
    setText("");
    setDate("");
  };

  const analyzeProgress = () => {
    const total = events.length;
    if (total === 0) return "No data";
    return `You have added ${total} tasks. Keep going!`;
  };

  return (
    <div className="p-6 grid gap-4">
      <Card>
        <CardContent className="p-4">
          <h2 className="text-xl font-bold mb-2">Add Schedule</h2>
          <Input
            placeholder="Task"
            value={text}
            onChange={(e) => setText(e.target.value)}
            className="mb-2"
          />
          <Input
            type="date"
            value={date}
            onChange={(e) => setDate(e.target.value)}
            className="mb-2"
          />
          <Button onClick={addEvent}>Add</Button>
        </CardContent>
      </Card>

      <Card>
        <CardContent className="p-4">
          <h2 className="text-xl font-bold mb-2">Weekly Goal</h2>
          <Input
            placeholder="Enter weekly goal"
            value={weeklyGoal}
            onChange={(e) => setWeeklyGoal(e.target.value)}
          />
        </CardContent>
      </Card>

      <Card>
        <CardContent className="p-4">
          <h2 className="text-xl font-bold mb-2">Monthly Goal</h2>
          <Input
            placeholder="Enter monthly goal"
            value={monthlyGoal}
            onChange={(e) => setMonthlyGoal(e.target.value)}
          />
        </CardContent>
      </Card>

      <Card>
        <CardContent className="p-4">
          <h2 className="text-xl font-bold mb-2">Your Schedule</h2>
          {events.map((e, i) => (
            <div key={i} className="flex justify-between">
              <span>{e.text}</span>
              <span>{e.date}</span>
            </div>
          ))}
        </CardContent>
      </Card>

      <Card>
        <CardContent className="p-4">
          <h2 className="text-xl font-bold mb-2">Analysis</h2>
          <p>{analyzeProgress()}</p>
        </CardContent>
      </Card>
    </div>
  );
}

