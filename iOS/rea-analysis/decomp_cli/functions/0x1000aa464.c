// rea decompile_all
// name: FUN_1000aa464
// address: 0x1000aa464
// body: available
// range: 0x1000aa464-0x1000aa577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000aa464(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar7 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[2] = param_2[2];
  uVar7 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar6 = uVar1 & uVar2 & 0xf000000000000007;
  if (((param_1[6] & param_1[7] ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if (uVar6 == 0xf000000000000007) {
      uVar7 = param_2[4];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar7;
      param_1[7] = uVar9;
      param_1[6] = uVar8;
    }
    else {
      uVar7 = param_2[4];
      uVar8 = param_2[5];
      FUN_100006b70(uVar7,uVar8,uVar1,uVar2);
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar1;
      param_1[7] = uVar2;
    }
  }
  else if (uVar6 == 0xf000000000000007) {
    FUN_100086398(param_1 + 4);
    uVar9 = param_2[4];
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar9;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
  }
  else {
    uVar7 = param_2[4];
    uVar3 = param_2[5];
    FUN_100006b70(uVar7,uVar3,uVar1,uVar2);
    uVar8 = param_1[4];
    uVar4 = param_1[5];
    uVar9 = param_1[6];
    uVar5 = param_1[7];
    param_1[4] = uVar7;
    param_1[5] = uVar3;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    FUN_10005f5ac(uVar8,uVar4,uVar9,uVar5);
  }
  return param_1;
}

