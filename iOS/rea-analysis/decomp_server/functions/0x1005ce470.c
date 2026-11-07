// rea decompile_all
// name: FUN_1005ce470
// address: 0x1005ce470
// body: available
// range: 0x1005ce470-0x1005ce63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005ce470(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 ***local_98 [2];
  char local_81;
  undefined8 **local_80;
  undefined8 **ppuStack_78;
  undefined8 **local_70;
  undefined8 ***local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  undefined1 uStack_41;
  
  sVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_1005cee68(local_98,sVar1 + 0xc,&uStack_41);
  ppppuVar4 = (undefined8 ****)local_98[0];
  if (-1 < local_81) {
    ppppuVar4 = local_98;
  }
  if (sVar1 != 0) {
    puVar2 = (void *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      puVar2 = param_2;
    }
    _memmove(ppppuVar4,puVar2,sVar1);
  }
  builtin_strncpy((char *)((long)ppppuVar4 + sVar1),"/.securelog-",0xd);
  puVar2 = (undefined8 *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    puVar2 = param_3;
  }
  ppppuVar4 = local_98;
  std::string::append((char *)ppppuVar4,(ulong)puVar2);
  ppuStack_78 = ppppuVar4[1];
  local_80 = *ppppuVar4;
  local_70 = ppppuVar4[2];
  ppppuVar4[1] = (undefined8 ***)0x0;
  ppppuVar4[2] = (undefined8 ***)0x0;
  *ppppuVar4 = (undefined8 ***)0x0;
  pppuVar5 = &local_80;
  std::string::append((char *)pppuVar5);
  puStack_58 = pppuVar5[1];
  local_60 = (undefined8 ***)*pppuVar5;
  local_50 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  ppppuVar4 = (undefined8 ****)local_60;
  if (-1 < (long)local_50) {
    ppppuVar4 = &local_60;
  }
  _open(ppppuVar4,0x1000202);
  iVar3 = (int)ppppuVar4;
  local_80 = (undefined8 **)CONCAT44(local_80._4_4_,iVar3);
  if (-1 < iVar3) {
    iVar3 = _flock(iVar3,6);
    if (iVar3 == 0) {
      FUN_1005ced8c(param_1,&local_80);
      uVar7 = 1;
      goto LAB_1005ce610;
    }
    piVar6 = ___error();
    if (param_4 != 0) {
      *(bool *)param_4 = *piVar6 == 0x23;
    }
    _close(ppppuVar4);
  }
  uVar7 = 0;
LAB_1005ce610:
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return uVar7;
}

