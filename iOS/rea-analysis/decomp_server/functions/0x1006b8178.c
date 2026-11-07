// rea decompile_all
// name: FUN_1006b8178
// address: 0x1006b8178
// body: available
// range: 0x1006b8178-0x1006b8267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1006b8178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 local_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  uVar3 = 0x20000 - param_5 >> 0xb;
  if (0x1ffff < param_5) {
    uVar3 = 0;
  }
  lVar1 = param_5 + (param_5 >> 8) + uVar3;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  lVar2 = lVar1;
  FUN_1006b17b4(lVar1,&local_58);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x210) = 1;
    *(undefined8 *)(param_1 + 0x218) = param_2;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = param_3;
    *(undefined4 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_48 = 0;
    local_60 = 0;
    local_70 = param_4;
    uStack_68 = param_5;
    local_58 = lVar2;
    lStack_50 = lVar1;
    FUN_1006baae4(param_1,&local_58,&local_70,2);
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    FUN_1006b1828(lVar2,&local_58);
    return *(undefined8 *)(param_1 + 0x220);
  }
  return 0xffffffffffffffc0;
}

