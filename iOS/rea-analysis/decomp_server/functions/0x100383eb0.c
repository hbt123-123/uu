// rea decompile_all
// name: FUN_100383eb0
// address: 0x100383eb0
// body: available
// range: 0x100383eb0-0x10038412b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100384100) */

undefined8 ****** FUN_100383eb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *****local_c8 [2];
  char local_b1;
  undefined8 ****local_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****local_a0;
  undefined8 *****local_98 [2];
  char local_81;
  undefined8 ****local_80;
  undefined8 ****ppppuStack_78;
  undefined8 ****local_70;
  undefined8 *****local_60 [2];
  char local_49;
  undefined1 uStack_41;
  
  puVar1 = &DAT_100b366e0;
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  bVar6 = *(byte *)((long)puVar1 + 0x17);
  sVar4 = puVar1[1];
  if (-1 < (char)bVar6) {
    sVar4 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_2 + 0x17);
  sVar2 = param_2[1];
  if (-1 < (char)bVar7) {
    sVar2 = (ulong)bVar7;
  }
  if (sVar4 == sVar2) {
    puVar5 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar5 = puVar1;
    }
    puVar3 = (void *)*param_2;
    if (-1 < (char)bVar7) {
      puVar3 = param_2;
    }
    iVar8 = _memcmp(puVar5,puVar3,sVar4);
    if (iVar8 == 0) {
      return (undefined8 ******)0x1;
    }
  }
  FUN_10039046c(puVar1);
  FUN_100382dec(local_60,param_1,puVar1);
  sVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  FUN_1003856e0(local_98,sVar4 + 1,&local_b0);
  ppppppuVar10 = (undefined8 ******)local_98[0];
  if (-1 < local_81) {
    ppppppuVar10 = local_98;
  }
  if (sVar4 != 0) {
    puVar5 = (undefined8 *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      puVar5 = param_2;
    }
    _memmove(ppppppuVar10,puVar5,sVar4);
  }
  *(undefined2 *)((long)ppppppuVar10 + sVar4) = 0x2f;
  ppppppuVar10 = (undefined8 ******)local_60[0];
  if (-1 < local_49) {
    ppppppuVar10 = local_60;
  }
  ppppppuVar9 = local_98;
  std::string::append((char *)ppppppuVar9,(ulong)ppppppuVar10);
  ppppuStack_78 = ppppppuVar9[1];
  local_80 = *ppppppuVar9;
  local_70 = ppppppuVar9[2];
  ppppppuVar9[1] = (undefined8 *****)0x0;
  ppppppuVar9[2] = (undefined8 *****)0x0;
  *ppppppuVar9 = (undefined8 *****)0x0;
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  FUN_10037fd50(local_98,param_1,puVar1);
  sVar4 = puVar1[1];
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    sVar4 = (ulong)*(byte *)((long)puVar1 + 0x17);
  }
  FUN_1003856e0(local_c8,sVar4 + 1,&uStack_41);
  ppppppuVar10 = (undefined8 ******)local_c8[0];
  if (-1 < local_b1) {
    ppppppuVar10 = local_c8;
  }
  if (sVar4 != 0) {
    puVar5 = (undefined8 *)*puVar1;
    if (-1 < *(char *)((long)puVar1 + 0x17)) {
      puVar5 = puVar1;
    }
    _memmove(ppppppuVar10,puVar5,sVar4);
  }
  *(undefined2 *)((long)ppppppuVar10 + sVar4) = 0x2f;
  if (-1 < local_49) {
    local_60[0] = local_60;
  }
  ppppppuVar10 = local_c8;
  std::string::append((char *)ppppppuVar10,(ulong)local_60[0]);
  ppppuStack_a8 = ppppppuVar10[1];
  local_b0 = *ppppppuVar10;
  local_a0 = ppppppuVar10[2];
  ppppppuVar10[1] = (undefined8 *****)0x0;
  ppppppuVar10[2] = (undefined8 *****)0x0;
  *ppppppuVar10 = (undefined8 *****)0x0;
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  ppppppuVar10 = local_98;
  FUN_100383844(ppppppuVar10,&local_80,&local_b0,0);
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  return ppppppuVar10;
}

