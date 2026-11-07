// rea decompile_all
// name: FUN_100388048
// address: 0x100388048
// body: available
// range: 0x100388048-0x1003881df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100388048(ulong param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
  lVar5 = 0x68;
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar5 = 0x70;
  }
  uVar1 = param_2 + *(long *)(param_3 + 0x20) + 4;
  lVar5 = *(long *)(*(long *)(param_1 + lVar5) + 0x18);
  uVar6 = 1;
  if (1 < lVar5 + 1U) {
    uVar6 = lVar5 + 1;
  }
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = ((uVar1 + uVar6) - 1) / uVar6;
  }
  uVar6 = uVar6 >> 1;
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar6 = uVar6 * uVar2 + uVar1;
  iVar4 = 0;
  if (uVar7 <= uVar6) {
    iVar4 = (int)param_4;
  }
  if ((uVar7 <= uVar1) || (iVar4 != 0)) {
    do {
      uVar1 = uVar7 << 1;
      uVar7 = uVar7 << 1;
    } while (uVar1 <= uVar6);
    FUN_100386734(1,"MMKV_IO.cpp","expandAndWriteBack",0x1b8,
                  "extending [%s] file size from %zu to %zu, incoming size:%zu, future usage:%zu");
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    FUN_10038fe2c(uVar3,uVar7);
    if ((int)uVar3 == 0) {
      return;
    }
    uVar7 = param_1;
    FUN_1003805d0();
    if ((uVar7 & 1) == 0) {
      FUN_100386734(2,"MMKV_IO.cpp","expandAndWriteBack",0x1c2,"[%s] file not valid");
      return;
    }
  }
  FUN_10037eac4(auStack_68,param_3);
  local_48 = *(undefined8 *)(param_3 + 0x20);
  FUN_1003881f4(param_1,auStack_68,0,param_4);
  thunk_FUN_10037edac(auStack_68);
  return;
}

