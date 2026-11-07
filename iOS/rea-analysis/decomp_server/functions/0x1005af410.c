// rea decompile_all
// name: FUN_1005af410
// address: 0x1005af410
// body: available
// range: 0x1005af410-0x1005af543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005af410(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  FUN_100006cdc(uVar1,uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  plVar4 = param_1 + 8;
  lVar3 = param_2[8];
  if (*plVar4 != 0) {
    if (lVar3 != 0) {
      param_1[8] = lVar3;
      _swift_bridgeObjectRelease();
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      FUN_100006cdc(uVar1,uVar2);
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      _swift_bridgeObjectRelease(uVar1);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      if (param_1[0xf] != 0) {
        lVar3 = param_2[0xf];
        if (lVar3 != 0) {
          uVar1 = param_1[0xd];
          uVar2 = param_1[0xe];
          uVar5 = param_2[0xd];
          param_1[0xe] = param_2[0xe];
          param_1[0xd] = uVar5;
          FUN_100006cdc(uVar1,uVar2);
          uVar1 = param_1[0xf];
          param_1[0xf] = lVar3;
          _swift_bridgeObjectRelease(uVar1);
          param_1[0x10] = param_2[0x10];
          goto LAB_1005af528;
        }
        FUN_1005a7fb4(param_1 + 0xd);
      }
      uVar1 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar1;
      uVar1 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar1;
      goto LAB_1005af528;
    }
    FUN_1005a8498(plVar4);
  }
  uVar1 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar2;
  param_1[0x10] = param_2[0x10];
  lVar3 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  *plVar4 = lVar3;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
LAB_1005af528:
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  return param_1;
}

