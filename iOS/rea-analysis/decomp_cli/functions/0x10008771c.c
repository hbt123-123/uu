// rea decompile_all
// name: FUN_10008771c
// address: 0x10008771c
// body: available
// range: 0x10008771c-0x100087803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10008771c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar3 = param_2[7];
  uVar4 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  if (((param_1[10] & param_1[0xb] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    uVar1 = param_2[10];
    uVar2 = param_2[0xb];
    if (((uVar1 & uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      uVar3 = param_1[8];
      uVar4 = param_1[9];
      uVar5 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar5;
      param_1[10] = uVar1;
      param_1[0xb] = uVar2;
      FUN_10005f5ac(uVar3,uVar4);
      goto LAB_1000877cc;
    }
    FUN_100086398(param_1 + 8);
  }
  uVar3 = param_2[8];
  uVar5 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
LAB_1000877cc:
  uVar3 = param_2[0xd];
  uVar4 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar3 = param_2[0x10];
  uVar4 = param_1[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}

