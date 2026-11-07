// rea decompile_all
// name: FUN_10037fd50
// address: 0x10037fd50
// body: available
// range: 0x10037fd50-0x10037fedb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037fed8 to 0x100384eb8 FUN_100384eb8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037fd50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 ***local_78 [2];
  char local_61;
  undefined8 **local_60;
  undefined8 **ppuStack_58;
  undefined8 **local_50;
  undefined1 uStack_41;
  
  if (param_3 == (undefined8 *)0x0) {
LAB_10037fe8c:
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100384eb8(param_1,*param_2,param_2[1]);
      return;
    }
    uVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[2] = param_2[2];
  }
  else {
    sVar1 = DAT_100b366e8;
    if (-1 < (char)DAT_100b366f0._7_1_) {
      sVar1 = (ulong)DAT_100b366f0._7_1_;
    }
    bVar5 = *(byte *)((long)param_3 + 0x17);
    sVar2 = param_3[1];
    if (-1 < (char)bVar5) {
      sVar2 = (ulong)bVar5;
    }
    if (sVar1 == sVar2) {
      puVar4 = DAT_100b366e0;
      if (-1 < (char)DAT_100b366f0._7_1_) {
        puVar4 = &DAT_100b366e0;
      }
      puVar3 = (void *)*param_3;
      if (-1 < (char)bVar5) {
        puVar3 = param_3;
      }
      iVar6 = _memcmp(puVar4,puVar3,sVar1);
      if (iVar6 == 0) goto LAB_10037fe8c;
    }
    FUN_1003856e0(local_78,sVar2 + 1,&uStack_41);
    ppppuVar7 = (undefined8 ****)local_78[0];
    if (-1 < local_61) {
      ppppuVar7 = local_78;
    }
    if (sVar2 != 0) {
      puVar4 = (undefined8 *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        puVar4 = param_3;
      }
      _memmove(ppppuVar7,puVar4,sVar2);
    }
    *(undefined2 *)((long)ppppuVar7 + sVar2) = 0x2f;
    puVar4 = (undefined8 *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      puVar4 = param_2;
    }
    ppppuVar7 = local_78;
    std::string::append((char *)ppppuVar7,(ulong)puVar4);
    ppuStack_58 = ppppuVar7[1];
    local_60 = *ppppuVar7;
    local_50 = ppppuVar7[2];
    ppppuVar7[1] = (undefined8 ***)0x0;
    ppppuVar7[2] = (undefined8 ***)0x0;
    *ppppuVar7 = (undefined8 ***)0x0;
    FUN_100384950(param_1,&local_60);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
  return;
}

