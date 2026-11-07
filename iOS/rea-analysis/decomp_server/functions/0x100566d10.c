// rea decompile_all
// name: FUN_100566d10
// address: 0x100566d10
// body: available
// range: 0x100566d10-0x100566ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100566d10(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  pcVar3 = *(code **)(param_4 + 0x10);
  while ((lVar1 = param_3, uVar2 = param_4, (*pcVar3)(), unaff_x21 == 0 && ((uVar2 & 1) == 0))) {
    if (lVar1 == 1) {
      _swift_beginAccess(param_1 + 0x10,auStack_58,0x21,0);
      (**(code **)(param_4 + 0x150))(param_1 + 0x10,param_3,param_4);
      _swift_endAccess(auStack_58);
    }
    else if (lVar1 == 2) {
      FUN_100566de0(param_2,param_1,param_3,param_4);
    }
  }
  return;
}

