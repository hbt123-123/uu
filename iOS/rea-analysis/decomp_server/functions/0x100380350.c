// rea decompile_all
// name: FUN_100380350
// address: 0x100380350
// body: available
// range: 0x100380350-0x10038057b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100380350(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  void **ppvVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  void *local_60;
  size_t local_58;
  byte local_49;
  long local_48;
  
  local_48 = *(long *)(param_1 + 0xb8);
  if (local_48 != 0) {
    FUN_100392994();
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        if (param_2[1] == 0) goto LAB_10038055c;
      }
      else if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_10038055c;
      FUN_100386734(1,"MMKV.cpp","checkReSetCryptKey",0x18b,"setting new aes key");
      cVar4 = *(char *)((long)param_2 + 0x17);
      lVar8 = (long)cVar4;
      puVar9 = param_2;
      if (lVar8 < 0) {
        puVar9 = (undefined8 *)*param_2;
      }
      pvVar6 = operator_new(0x38);
      if (cVar4 < '\0') {
        lVar8 = param_2[1];
      }
      thunk_FUN_100392ad4(pvVar6,puVar9,lVar8,0,0);
      *(void **)(param_1 + 0xb0) = pvVar6;
      FUN_10038774c(param_1);
    }
    goto LAB_10038055c;
  }
  if (param_2 == (undefined8 *)0x0) {
LAB_1003804a4:
    FUN_100386734(1,"MMKV.cpp","checkReSetCryptKey",0x183,"reset aes key");
    pvVar6 = *(void **)(param_1 + 0xb0);
    if (pvVar6 != (void *)0x0) {
      thunk_FUN_100392c48();
      operator_delete(pvVar6);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_10038774c(param_1);
    goto LAB_10038055c;
  }
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == 0) goto LAB_1003804a4;
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') goto LAB_1003804a4;
  FUN_10038028c(&local_60,param_1);
  uVar7 = (uint)(char)local_49;
  if (-1 < (int)uVar7) {
    local_58 = (ulong)local_49;
  }
  bVar3 = *(byte *)((long)param_2 + 0x17);
  sVar1 = param_2[1];
  if (-1 < (char)bVar3) {
    sVar1 = (ulong)bVar3;
  }
  if (local_58 == sVar1) {
    ppvVar2 = local_60;
    if (-1 < (int)uVar7) {
      ppvVar2 = &local_60;
    }
    puVar9 = (void *)*param_2;
    if (-1 < (char)bVar3) {
      puVar9 = param_2;
    }
    iVar5 = _memcmp(ppvVar2,puVar9,local_58);
    if (iVar5 != 0) goto LAB_1003803f8;
  }
  else {
LAB_1003803f8:
    FUN_100386734(1,"MMKV.cpp","checkReSetCryptKey",0x179,"setting new aes key");
    pvVar6 = *(void **)(param_1 + 0xb0);
    if (pvVar6 != (void *)0x0) {
      thunk_FUN_100392c48();
      operator_delete(pvVar6);
    }
    cVar4 = *(char *)((long)param_2 + 0x17);
    lVar8 = (long)cVar4;
    puVar9 = param_2;
    if (lVar8 < 0) {
      puVar9 = (undefined8 *)*param_2;
    }
    pvVar6 = operator_new(0x38);
    if (cVar4 < '\0') {
      lVar8 = param_2[1];
    }
    thunk_FUN_100392ad4(pvVar6,puVar9,lVar8,0,0);
    *(void **)(param_1 + 0xb0) = pvVar6;
    FUN_10038774c(param_1);
    uVar7 = (uint)local_49;
  }
  if ((uVar7 >> 7 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_10038055c:
  FUN_100385098(&local_48);
  return;
}

