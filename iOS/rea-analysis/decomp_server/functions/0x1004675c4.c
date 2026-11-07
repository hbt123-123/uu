// rea decompile_all
// name: FUN_1004675c4
// address: 0x1004675c4
// body: available
// range: 0x1004675c4-0x10046764b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1004675c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1[2] != 0) {
    lVar1 = param_2[2];
    if (lVar1 != 0) {
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      param_1[2] = lVar1;
      _swift_bridgeObjectRelease();
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar2 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar2;
      FUN_100006cdc(uVar3,uVar4);
      goto LAB_10046762c;
    }
    FUN_100467594(param_1);
  }
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar4;
  param_1[4] = param_2[4];
LAB_10046762c:
  uVar3 = param_1[5];
  uVar4 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  FUN_100006cdc(uVar3,uVar4);
  return param_1;
}

