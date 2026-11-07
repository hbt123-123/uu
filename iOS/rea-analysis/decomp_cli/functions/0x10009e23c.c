// rea decompile_all
// name: FUN_10009e23c
// address: 0x10009e23c
// body: available
// range: 0x10009e23c-0x10009e423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009e23c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar2 = param_2[5];
  uVar5 = param_2[6];
  uVar1 = *(undefined1 *)(param_2 + 7);
  if ((uVar8 >> 0x3d & 3) == 0) {
    if (-1 < (long)uVar8) {
      FUN_10009e17c(uVar2,uVar5,uVar1);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(0x205d,0xe200000000000000);
      FUN_1000979e4(uVar4,uVar7,uVar8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_10009e3f8;
    }
    uVar3 = param_2[3];
    uVar6 = param_2[4];
    FUN_10009e17c(uVar2,uVar5,uVar1);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(0x205d,0xe200000000000000);
    FUN_1000979e4(uVar4,uVar7,uVar8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar7);
    __sSS6appendyySSF(0x273d,0xe200000000000000);
LAB_10009e3e4:
    __sSS6appendyySSF(uVar3,uVar6);
    uVar4 = 0x27;
    uVar7 = 0xe100000000000000;
  }
  else {
    if (((uint)(uVar8 >> 0x3d) & 3) == 1) {
      FUN_10009e17c(uVar2,uVar5,uVar1);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar5);
      __sSS6appendyySSF(0x27205d,0xe300000000000000);
      uVar3 = uVar4;
      uVar6 = uVar7;
      goto LAB_10009e3e4;
    }
    FUN_10009e17c(uVar2,uVar5,uVar1);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar5);
    uVar4 = 0x2d2d205d;
    uVar7 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar7);
LAB_10009e3f8:
  *param_1 = 0x5b;
  param_1[1] = 0xe100000000000000;
  return;
}

