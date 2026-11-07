// rea decompile_all
// name: FUN_100026c28
// address: 0x100026c28
// body: available
// range: 0x100026c28-0x100026d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100026c28(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_68 [24];
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  FUN_1003d541c();
  puVar3 = auStack_68;
  _swift_beginAccess(param_3 + 0x80,puVar3,0x20,0);
  uVar5 = (uint)puVar3;
  if (*(long *)(*(long *)(param_3 + 0x80) + 0x10) == 0) {
    uVar5 = 1;
  }
  else {
    thunk_FUN_1001a2c34(param_1);
    uVar5 = uVar5 ^ 1;
  }
  puVar3 = auStack_68;
  _swift_endAccess(puVar3);
  FUN_1003d541c();
  puVar4 = auStack_68;
  _swift_beginAccess(param_3 + 0x80,puVar4,0x20,0);
  if (*(long *)(*(long *)(param_3 + 0x80) + 0x10) == 0) {
    _swift_endAccess(auStack_68);
  }
  else {
    thunk_FUN_1001a2c34(puVar3);
    _swift_endAccess(auStack_68);
    if (((ulong)puVar4 & 1) != 0) {
      if ((uVar5 & 1) != 0) {
        return false;
      }
      goto LAB_100026cf4;
    }
  }
  if ((uVar5 & 1) == 0) {
    return true;
  }
LAB_100026cf4:
  return lVar1 < lVar2;
}

