// rea decompile_all
// name: FUN_100463a98
// address: 0x100463a98
// body: available
// range: 0x100463a98-0x100463bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100463a98(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar4;
  uVar3 = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  FUN_100008184(uVar5,uVar3);
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  cVar1 = *(char *)(param_2 + 5);
  if (cVar1 == '\x02') {
    uVar4 = param_2[5];
    uVar3 = param_2[8];
    uVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[8] = uVar3;
    param_1[7] = uVar5;
    param_1[9] = param_2[9];
    lVar2 = param_2[0xc];
  }
  else {
    *(char *)(param_1 + 5) = cVar1;
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
    uVar4 = param_2[8];
    uVar5 = param_2[9];
    FUN_100008184(uVar4,uVar5);
    param_1[8] = uVar4;
    param_1[9] = uVar5;
    lVar2 = param_2[0xc];
  }
  if (lVar2 == 0) {
    uVar4 = param_2[0x12];
    uVar3 = param_2[0x15];
    uVar5 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar4;
    param_1[0x15] = uVar3;
    param_1[0x14] = uVar5;
    uVar4 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar4;
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar5 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar5;
    uVar3 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
  }
  else {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar2;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0x10] = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    param_1[0x12] = param_2[0x12];
    param_1[0x14] = param_2[0x14];
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
    uVar4 = param_2[0x16];
    uVar5 = param_2[0x17];
    _swift_bridgeObjectRetain();
    FUN_100008184(uVar4,uVar5);
    param_1[0x16] = uVar4;
    param_1[0x17] = uVar5;
  }
  return param_1;
}

