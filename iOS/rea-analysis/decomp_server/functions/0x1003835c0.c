// rea decompile_all
// name: FUN_1003835c0
// address: 0x1003835c0
// body: available
// range: 0x1003835c0-0x1003837e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003835c0(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***local_98 [2];
  char local_81;
  undefined8 ***local_80;
  undefined8 **ppuStack_78;
  undefined8 **local_70;
  undefined8 **local_60;
  undefined8 **ppuStack_58;
  undefined8 **local_50;
  undefined1 uStack_41;
  
  puVar4 = &DAT_100b366e0;
  if (param_2 != (undefined8 *)0x0) {
    puVar4 = param_2;
  }
  bVar5 = *(byte *)((long)puVar4 + 0x17);
  sVar3 = puVar4[1];
  if (-1 < (char)bVar5) {
    sVar3 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_1 + 0x17);
  sVar1 = param_1[1];
  if (-1 < (char)bVar6) {
    sVar1 = (ulong)bVar6;
  }
  if (sVar3 == sVar1) {
    puVar8 = (undefined8 *)*puVar4;
    if (-1 < (char)bVar5) {
      puVar8 = puVar4;
    }
    puVar2 = (void *)*param_1;
    if (-1 < (char)bVar6) {
      puVar2 = param_1;
    }
    iVar7 = _memcmp(puVar8,puVar2,sVar3);
    if (iVar7 == 0) {
      return (undefined8 *)0x1;
    }
  }
  puVar8 = param_1;
  FUN_100383200(param_1,puVar4,0);
  sVar3 = puVar4[1];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    sVar3 = (ulong)*(byte *)((long)puVar4 + 0x17);
  }
  FUN_1003856e0(&local_80,sVar3 + 1,local_98);
  ppppuVar9 = (undefined8 ****)local_80;
  if (-1 < (long)local_70) {
    ppppuVar9 = &local_80;
  }
  if (sVar3 != 0) {
    puVar2 = (undefined8 *)*puVar4;
    if (-1 < *(char *)((long)puVar4 + 0x17)) {
      puVar2 = puVar4;
    }
    _memmove(ppppuVar9,puVar2,sVar3);
  }
  *(undefined2 *)((long)ppppuVar9 + sVar3) = 0x2f;
  ppppuVar9 = &local_80;
  std::string::append((char *)ppppuVar9);
  ppuStack_58 = ppppuVar9[1];
  local_60 = *ppppuVar9;
  local_50 = ppppuVar9[2];
  ppppuVar9[1] = (undefined8 ***)0x0;
  ppppuVar9[2] = (undefined8 ***)0x0;
  *ppppuVar9 = (undefined8 ***)0x0;
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  iVar7 = (int)&local_60;
  FUN_100390428();
  if (iVar7 != 0) {
    sVar3 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      sVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    FUN_1003856e0(local_98,sVar3 + 1,&uStack_41);
    ppppuVar9 = (undefined8 ****)local_98[0];
    if (-1 < local_81) {
      ppppuVar9 = local_98;
    }
    if (sVar3 != 0) {
      puVar4 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar4 = param_1;
      }
      _memmove(ppppuVar9,puVar4,sVar3);
    }
    *(undefined2 *)((long)ppppuVar9 + sVar3) = 0x2f;
    ppppuVar9 = local_98;
    std::string::append((char *)ppppuVar9);
    ppuStack_78 = ppppuVar9[1];
    local_80 = *ppppuVar9;
    local_70 = ppppuVar9[2];
    ppppuVar9[1] = (undefined8 ***)0x0;
    ppppuVar9[2] = (undefined8 ***)0x0;
    *ppppuVar9 = (undefined8 ***)0x0;
    if (local_81 < '\0') {
      operator_delete(local_98[0]);
    }
    ppppuVar9 = &local_80;
    FUN_100383200(ppppuVar9,&local_60,1);
    puVar8 = (undefined8 *)((long)ppppuVar9 + (long)puVar8);
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
  }
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  return puVar8;
}

