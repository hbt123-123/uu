// rea decompile_all
// name: FUN_1002675f0
// address: 0x1002675f0
// body: available
// range: 0x1002675f0-0x1002676e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1002675f0(undefined8 param_1,undefined8 param_2,ulong param_3,code *param_4,undefined8 param_5,
             long param_6)

{
  long unaff_x21;
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  byte local_80;
  byte local_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  byte local_67;
  
  uVar1 = (uint)param_3 >> 8 & 0xff;
  local_68 = (byte)param_3;
  local_67 = (byte)(param_3 >> 8);
  lVar2 = *(long *)(param_6 + 0x10);
  local_78 = param_1;
  uStack_70 = param_2;
  FUN_100260254();
  if (lVar2 != 0) {
    param_6 = param_6 + 0x20;
    do {
      (*param_4)(&local_90,&local_78,param_6);
      if (unaff_x21 != 0) {
        FUN_10025fdac(param_1,param_2,param_3,uVar1 & 1);
        break;
      }
      FUN_10025fdac(param_1,param_2,param_3,uVar1 & 1);
      local_78 = local_90;
      uStack_70 = uStack_88;
      local_68 = local_80;
      param_3 = (ulong)local_80;
      local_67 = local_7f;
      uVar1 = (uint)local_7f;
      param_6 = param_6 + 0x28;
      lVar2 = lVar2 + -1;
      param_2 = uStack_88;
      param_1 = local_90;
    } while (lVar2 != 0);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}

