// rea decompile_all
// name: FUN_100664a10
// address: 0x100664a10
// body: available
// range: 0x100664a10-0x100664ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100664a10(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 local_50;
  undefined *local_48;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100664ad8);
    (*pcVar4)();
  }
  local_48 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1 != 0) {
    FUN_100664ad8(0,param_1,0);
    do {
      puVar3 = local_48;
      local_50 = 0;
      _swift_stdlib_random(&local_50,8);
      uVar2 = local_50;
      uVar1 = *(ulong *)(puVar3 + 0x10);
      local_48 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_100664ad8(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_48 + 0x10) = uVar1 + 1;
      local_48[uVar1 + 0x20] = (char)uVar2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return local_48;
}

