// rea decompile_all
// name: FUN_100463f08
// address: 0x100463f08
// body: available
// range: 0x100463f08-0x100464097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100463f08(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[2];
  uVar3 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  FUN_100006cdc(uVar2,uVar3);
  pcVar5 = (char *)(param_1 + 5);
  bVar1 = *(byte *)(param_2 + 5);
  if (*pcVar5 != '\x02') {
    if (bVar1 != 2) {
      *(byte *)(param_1 + 5) = bVar1 & 1;
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
      uVar2 = param_1[8];
      uVar3 = param_1[9];
      uVar6 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar6;
      FUN_100006cdc(uVar2,uVar3);
      lVar4 = param_1[0xc];
      goto joined_r0x000100463f8c;
    }
    FUN_10045eb24(pcVar5);
  }
  uVar2 = param_2[5];
  uVar6 = param_2[8];
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  *(undefined8 *)pcVar5 = uVar2;
  param_1[8] = uVar6;
  param_1[7] = uVar3;
  param_1[9] = param_2[9];
  lVar4 = param_1[0xc];
joined_r0x000100463f8c:
  if (lVar4 != 0) {
    lVar4 = param_2[0xc];
    if (lVar4 != 0) {
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
      *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
      *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)param_2 + 0x52);
      *(undefined1 *)((long)param_1 + 0x53) = *(undefined1 *)((long)param_2 + 0x53);
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = lVar4;
      _swift_bridgeObjectRelease();
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      param_1[0xe] = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      param_1[0x10] = param_2[0x10];
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      param_1[0x12] = param_2[0x12];
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
      param_1[0x14] = param_2[0x14];
      uVar2 = param_1[0x16];
      uVar3 = param_1[0x17];
      uVar6 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar6;
      FUN_100006cdc(uVar2,uVar3);
      return param_1;
    }
    FUN_10045ec08(param_1 + 10);
  }
  uVar2 = param_2[0x12];
  uVar6 = param_2[0x15];
  uVar3 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  param_1[0x15] = uVar6;
  param_1[0x14] = uVar3;
  uVar2 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  uVar2 = param_2[10];
  uVar6 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar3;
  uVar6 = param_2[0xe];
  uVar3 = param_2[0x11];
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar6;
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  return param_1;
}

