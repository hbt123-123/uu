// rea decompile_all
// name: FUN_10038edb4
// address: 0x10038edb4
// body: available
// range: 0x10038edb4-0x10038eea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_10038edb4(long param_1,int param_2)

{
  ID self;
  long *plVar1;
  undefined8 *local_30;
  long local_28;
  
  local_28 = *(long *)(param_1 + 0xb8);
  if (local_28 != 0) {
    FUN_100392994();
  }
  FUN_10038774c(param_1);
  if ((param_2 != 0) && (*(char *)(param_1 + 0xd8) == '\x01')) {
    local_30 = *(undefined8 **)(param_1 + 0xd0);
    if ((local_30 != (undefined8 *)0x0) && (*(char *)((long)local_30 + 0xc) == '\x01')) {
      FUN_10037dd20(*local_30,*(undefined4 *)(local_30 + 1));
    }
    FUN_100386f70(param_1,0,1);
    FUN_100385fb0(&local_30);
  }
  self = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray);
  if (*(long *)(param_1 + 0xb0) == 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x68) + 0x10);
    while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
      NSMutableArray::addObject_(self,plVar1[2]);
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x10);
    while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
      NSMutableArray::addObject_(self,plVar1[2]);
    }
  }
  FUN_100385098(&local_28);
  return self;
}

