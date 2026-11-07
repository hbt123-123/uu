// rea decompile_all
// name: FUN_10038a348
// address: 0x10038a348
// body: available
// range: 0x10038a348-0x10038a6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10038a348(ulong param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 ****ppppuVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  bool bVar11;
  undefined8 ***local_58;
  size_t local_50;
  byte local_41;
  undefined8 *local_40;
  long local_38;
  
  local_38 = *(long *)(param_1 + 0xb8);
  if (local_38 != 0) {
    FUN_100392994();
  }
  local_40 = *(undefined8 **)(param_1 + 0xd0);
  if ((local_40 != (undefined8 *)0x0) && (*(char *)((long)local_40 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_40,*(undefined4 *)(local_40 + 1));
  }
  FUN_10038774c(param_1);
  uVar5 = param_1;
  FUN_1003805d0();
  if ((uVar5 & 1) == 0) {
    pcVar10 = "[%s] file not valid";
    uVar9 = 0x542;
LAB_10038a4dc:
    FUN_100386734(2,"MMKV_IO.cpp","reKey",uVar9,pcVar10);
  }
  else {
    if ((*(byte *)(param_1 + 0x30) >> 5 & 1) != 0) {
      pcVar10 = "[%s] file readonly";
      uVar9 = 0x546;
      goto LAB_10038a4dc;
    }
    uVar5 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    if (*(long *)(param_1 + 0xb0) == 0) {
      if (uVar5 != 0) {
        FUN_100386734(1,"MMKV_IO.cpp","reKey",0x56d,"reKey to a aes key");
        *(undefined1 *)(param_1 + 0x99) = 0;
        pvVar6 = operator_new(0x38);
        uVar5 = param_2[1];
        puVar8 = (undefined8 *)*param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
          puVar8 = param_2;
        }
        thunk_FUN_100392ad4(pvVar6,puVar8,uVar5,0,0);
        uVar5 = param_1;
        FUN_100386f70(param_1,pvVar6,0);
        if ((int)uVar5 == 0) {
          thunk_FUN_100392c48();
          operator_delete(pvVar6);
          goto LAB_10038a4f8;
        }
        *(void **)(param_1 + 0xb0) = pvVar6;
        if (*(long *)(param_1 + 0x70) == 0) {
          puVar8 = operator_new(0x28);
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          *(undefined4 *)(puVar8 + 4) = 0x3f800000;
          *(undefined8 **)(param_1 + 0x70) = puVar8;
        }
LAB_10038a698:
        FUN_10037f730(param_1,0);
      }
      iVar4 = 1;
      goto LAB_10038a4fc;
    }
    if (uVar5 != 0) {
      FUN_10038028c(&local_58,param_1);
      bVar3 = *(byte *)((long)param_2 + 0x17);
      sVar1 = param_2[1];
      if (-1 < (char)bVar3) {
        sVar1 = (ulong)bVar3;
      }
      if (-1 < (char)local_41) {
        local_50 = (ulong)local_41;
      }
      if (sVar1 == local_50) {
        puVar8 = (void *)*param_2;
        if (-1 < (char)bVar3) {
          puVar8 = param_2;
        }
        ppppuVar2 = (undefined8 ****)local_58;
        if (-1 < (char)local_41) {
          ppppuVar2 = &local_58;
        }
        iVar4 = _memcmp(puVar8,ppppuVar2,sVar1);
        if (iVar4 != 0) goto LAB_10038a434;
        iVar4 = 1;
LAB_10038a67c:
        bVar11 = true;
      }
      else {
LAB_10038a434:
        FUN_100386734(1,"MMKV_IO.cpp","reKey",0x552,"reKey with new aes key");
        pvVar6 = operator_new(0x38);
        uVar5 = param_2[1];
        puVar8 = (undefined8 *)*param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
          puVar8 = param_2;
        }
        thunk_FUN_100392ad4(pvVar6,puVar8,uVar5,0,0);
        *(undefined1 *)(param_1 + 0x99) = 0;
        uVar5 = param_1;
        FUN_100386f70(param_1,pvVar6,0);
        if ((int)uVar5 == 0) {
          thunk_FUN_100392c48();
          operator_delete(pvVar6);
          iVar4 = 0;
          goto LAB_10038a67c;
        }
        pvVar7 = *(void **)(param_1 + 0xb0);
        if (pvVar7 != (void *)0x0) {
          thunk_FUN_100392c48();
          operator_delete(pvVar7);
        }
        iVar4 = 0;
        bVar11 = false;
        *(void **)(param_1 + 0xb0) = pvVar6;
      }
      if ((char)local_41 < '\0') {
        operator_delete(local_58);
      }
      if (iVar4 != 0 || bVar11) goto LAB_10038a4fc;
      goto LAB_10038a698;
    }
    FUN_100386734(1,"MMKV_IO.cpp","reKey",0x55f,"reKey to no aes key");
    *(undefined1 *)(param_1 + 0x99) = 0;
    uVar5 = param_1;
    FUN_100386f70(param_1,1,0);
    if ((int)uVar5 != 0) {
      pvVar6 = *(void **)(param_1 + 0xb0);
      if (pvVar6 != (void *)0x0) {
        thunk_FUN_100392c48();
        operator_delete(pvVar6);
      }
      *(undefined8 *)(param_1 + 0xb0) = 0;
      if (*(long *)(param_1 + 0x68) == 0) {
        puVar8 = operator_new(0x28);
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        *(undefined4 *)(puVar8 + 4) = 0x3f800000;
        *(undefined8 **)(param_1 + 0x68) = puVar8;
      }
      goto LAB_10038a698;
    }
  }
LAB_10038a4f8:
  iVar4 = 0;
LAB_10038a4fc:
  FUN_100385fb0(&local_40);
  FUN_100385098(&local_38);
  return iVar4;
}

