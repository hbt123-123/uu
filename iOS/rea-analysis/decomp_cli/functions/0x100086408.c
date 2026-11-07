// rea decompile_all
// name: FUN_100086408
// address: 0x100086408
// body: available
// range: 0x100086408-0x10008658f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_100086408(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_2;
  if (*param_1 < 2) {
LAB_100086450:
    *param_1 = uVar3;
  }
  else {
    if (uVar3 < 2) {
      FUN_10001fc18(param_1,&DAT_100104988,&DAT_1000d55c8);
      goto LAB_100086450;
    }
    *param_1 = uVar3;
    _swift_bridgeObjectRelease();
  }
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar3);
  *(char *)(param_1 + 6) = (char)param_2[6];
  uVar3 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  if (((param_1[0xb] & param_1[0xc] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    uVar3 = param_2[0xb];
    uVar2 = param_2[0xc];
    if (((uVar3 & uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      uVar1 = param_1[9];
      uVar5 = param_1[10];
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      param_1[0xb] = uVar3;
      param_1[0xc] = uVar2;
      FUN_10005f5ac(uVar1,uVar5);
      goto LAB_100086504;
    }
    FUN_100086398(param_1 + 9);
  }
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
LAB_100086504:
  uVar3 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  *(char *)(param_1 + 0xf) = (char)param_2[0xf];
  uVar3 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x14];
  uVar3 = param_1[0x12];
  uVar2 = param_1[0x13];
  uVar5 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  uVar5 = param_1[0x14];
  *(char *)(param_1 + 0x14) = (char)uVar1;
  FUN_10005e218(uVar3,uVar2,(char)uVar5);
  *(undefined1 *)((long)param_1 + 0xa1) = *(undefined1 *)((long)param_2 + 0xa1);
  uVar1 = param_2[0x17];
  uVar3 = param_1[0x15];
  uVar2 = param_1[0x16];
  uVar5 = param_1[0x17];
  uVar4 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar4;
  *(char *)(param_1 + 0x17) = (char)uVar1;
  FUN_100085fb0(uVar3,uVar2,(char)uVar5);
  uVar3 = param_1[0x19];
  uVar2 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar2;
  _swift_release(uVar3);
  return param_1;
}

