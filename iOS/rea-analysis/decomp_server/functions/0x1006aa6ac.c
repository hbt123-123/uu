// rea decompile_all
// name: FUN_1006aa6ac
// address: 0x1006aa6ac
// body: available
// range: 0x1006aa6ac-0x1006aa753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aa6ac(long param_1,undefined1 *param_2,int param_3,undefined1 param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  tm *ptVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  __darwin_time_t local_38;
  timeval local_30;
  
  *param_2 = param_4;
  if (param_3 == 0) {
    uVar4 = 0;
    uVar2 = DAT_100b2c6d0;
  }
  else {
    uVar4 = DAT_100b2c6d0 + 2;
    uVar2 = uVar4;
    if ((DAT_100b2c6d0 + 1 & 0x10000) == 0) {
      uVar4 = DAT_100b2c6d0 + 1;
      uVar2 = uVar4;
    }
  }
  DAT_100b2c6d0 = uVar2;
  *(ushort *)(param_1 + 8) = uVar4;
  *(ushort *)(param_2 + 1) = uVar4;
  _gettimeofday(&local_30,(void *)0x0);
  local_38 = local_30.tv_sec;
  ptVar3 = _localtime(&local_38);
  uVar1 = (undefined1)ptVar3->tm_hour;
  param_2[3] = uVar1;
  param_2[4] = uVar1;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  uVar8 = *(undefined8 *)(param_1 + 0x34);
  uVar7 = *(undefined8 *)(param_1 + 0x2c);
  uVar10 = *(undefined8 *)(param_1 + 0x44);
  uVar9 = *(undefined8 *)(param_1 + 0x3c);
  uVar11 = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)(param_2 + 0x41) = *(undefined8 *)(param_1 + 0x54);
  *(undefined8 *)(param_2 + 0x39) = uVar11;
  *(undefined8 *)(param_2 + 0x31) = uVar10;
  *(undefined8 *)(param_2 + 0x29) = uVar9;
  *(undefined8 *)(param_2 + 0x21) = uVar8;
  *(undefined8 *)(param_2 + 0x19) = uVar7;
  *(undefined8 *)(param_2 + 0x11) = uVar6;
  *(undefined8 *)(param_2 + 9) = uVar5;
  return;
}

