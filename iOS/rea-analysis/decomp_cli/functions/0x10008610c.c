// rea decompile_all
// name: FUN_10008610c
// address: 0x10008610c
// body: available
// range: 0x10008610c-0x100086397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_10008610c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  uVar6 = *param_2;
  if (uVar8 < 2) {
    if (uVar6 < 2) {
      *param_1 = uVar6;
    }
    else {
      *param_1 = uVar6;
      _swift_bridgeObjectRetain();
    }
  }
  else if (uVar6 < 2) {
    FUN_10001fc18(param_1,&DAT_100104988,&DAT_1000d55c8);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar6;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar8);
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(char *)(param_1 + 6) = (char)param_2[6];
  param_1[7] = param_2[7];
  uVar6 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_2[0xb];
  uVar8 = param_2[0xc];
  uVar7 = uVar6 & uVar8 & 0xf000000000000007;
  if (((param_1[0xb] & param_1[0xc] ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if (uVar7 == 0xf000000000000007) {
      uVar8 = param_2[10];
      uVar6 = param_2[9];
      uVar7 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar7;
      param_1[10] = uVar8;
      param_1[9] = uVar6;
    }
    else {
      uVar7 = param_2[9];
      uVar3 = param_2[10];
      FUN_100006b70(uVar7,uVar3,uVar6,uVar8);
      param_1[9] = uVar7;
      param_1[10] = uVar3;
      param_1[0xb] = uVar6;
      param_1[0xc] = uVar8;
    }
  }
  else if (uVar7 == 0xf000000000000007) {
    FUN_100086398(param_1 + 9);
    uVar8 = param_2[0xc];
    uVar6 = param_2[0xb];
    uVar7 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar7;
    param_1[0xc] = uVar8;
    param_1[0xb] = uVar6;
  }
  else {
    uVar7 = param_2[9];
    uVar5 = param_2[10];
    FUN_100006b70(uVar7,uVar5,uVar6,uVar8);
    uVar3 = param_1[9];
    uVar1 = param_1[10];
    uVar4 = param_1[0xb];
    uVar2 = param_1[0xc];
    param_1[9] = uVar7;
    param_1[10] = uVar5;
    param_1[0xb] = uVar6;
    param_1[0xc] = uVar8;
    FUN_10005f5ac(uVar3,uVar1,uVar4,uVar2);
  }
  param_1[0xd] = param_2[0xd];
  uVar6 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  param_1[0x10] = param_2[0x10];
  uVar6 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = param_2[0x12];
  uVar7 = param_2[0x13];
  uVar4 = param_2[0x14];
  FUN_10005f534(uVar6,uVar7,(char)uVar4);
  uVar8 = param_1[0x12];
  uVar3 = param_1[0x13];
  param_1[0x12] = uVar6;
  param_1[0x13] = uVar7;
  uVar6 = param_1[0x14];
  *(char *)(param_1 + 0x14) = (char)uVar4;
  FUN_10005e218(uVar8,uVar3,(char)uVar6);
  *(undefined1 *)((long)param_1 + 0xa1) = *(undefined1 *)((long)param_2 + 0xa1);
  uVar6 = param_2[0x15];
  uVar7 = param_2[0x16];
  uVar4 = param_2[0x17];
  FUN_10006518c(uVar6,uVar7,(char)uVar4);
  uVar8 = param_1[0x15];
  uVar3 = param_1[0x16];
  uVar5 = param_1[0x17];
  param_1[0x15] = uVar6;
  param_1[0x16] = uVar7;
  *(char *)(param_1 + 0x17) = (char)uVar4;
  FUN_100085fb0(uVar8,uVar3,(char)uVar5);
  uVar6 = param_2[0x19];
  uVar8 = param_1[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar6;
  _swift_retain();
  _swift_release(uVar8);
  return param_1;
}

