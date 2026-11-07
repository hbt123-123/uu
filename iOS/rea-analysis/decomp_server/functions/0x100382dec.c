// rea decompile_all
// name: FUN_100382dec
// address: 0x100382dec
// body: available
// range: 0x100382dec-0x10038302f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038302c to 0x100384eb8 FUN_100384eb8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100382dec(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 *******pppppppuVar9;
  void **ppvVar10;
  undefined8 *******pppppppuVar11;
  undefined8 uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  void *local_d8 [2];
  char local_c1;
  undefined8 *******local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  undefined8 *******local_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******local_90;
  undefined8 *******local_80;
  undefined8 uStack_78;
  long local_70;
  
  bVar5 = param_2[0x17];
  pcVar3 = *(char **)param_2;
  uVar4 = *(ulong *)(param_2 + 8);
  uVar6 = uVar4;
  pcVar7 = pcVar3;
  if (-1 < (char)bVar5) {
    uVar6 = (ulong)bVar5;
    pcVar7 = param_2;
  }
  while( true ) {
    if (uVar6 == 0) {
      if (-1 < (char)bVar5) {
        uVar12 = *(undefined8 *)param_2;
        param_1[1] = *(undefined8 *)(param_2 + 8);
        *param_1 = uVar12;
        param_1[2] = *(undefined8 *)(param_2 + 0x10);
        return;
      }
      FUN_100384eb8(param_1,pcVar3,uVar4);
      return;
    }
    pvVar8 = _memchr("\\/:*?\"<>|",(int)*pcVar7,10);
    if (pvVar8 != (void *)0x0) break;
    uVar6 = uVar6 - 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_100384950(&local_a0,param_2);
  uStack_78 = ppppppuStack_98;
  local_80 = local_a0;
  local_70 = (long)local_90;
  sVar1 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  FUN_1003856e0(&local_c0,sVar1 + 1,local_d8);
  pppppppuVar9 = local_c0;
  if (-1 < (long)local_b0) {
    pppppppuVar9 = &local_c0;
  }
  if (sVar1 != 0) {
    puVar2 = (void *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      puVar2 = param_3;
    }
    _memmove(pppppppuVar9,puVar2,sVar1);
  }
  *(undefined2 *)((long)pppppppuVar9 + sVar1) = 0x2f;
  pppppppuVar9 = &local_c0;
  std::string::append((char *)pppppppuVar9);
  ppppppuStack_98 = pppppppuVar9[1];
  local_a0 = (undefined8 *******)*pppppppuVar9;
  local_90 = pppppppuVar9[2];
  pppppppuVar9[1] = (undefined8 ******)0x0;
  pppppppuVar9[2] = (undefined8 ******)0x0;
  *pppppppuVar9 = (undefined8 ******)0x0;
  if (local_b0._7_1_ < '\0') {
    operator_delete(local_c0);
  }
  FUN_10039046c(&local_a0);
  FUN_100384ff4(local_d8,"specialCharacter");
  ppvVar10 = local_d8;
  std::string::append((char *)ppvVar10);
  pvStack_b8 = ppvVar10[1];
  local_c0 = *ppvVar10;
  local_b0 = ppvVar10[2];
  ppvVar10[1] = (void *)0x0;
  ppvVar10[2] = (void *)0x0;
  *ppvVar10 = (void *)0x0;
  pppppppuVar9 = local_80;
  if (-1 < local_70) {
    pppppppuVar9 = &local_80;
  }
  pppppppuVar11 = &local_c0;
  std::string::append((char *)pppppppuVar11,(ulong)pppppppuVar9);
  ppppppuVar14 = pppppppuVar11[1];
  ppppppuVar13 = *pppppppuVar11;
  param_1[2] = pppppppuVar11[2];
  param_1[1] = ppppppuVar14;
  *param_1 = ppppppuVar13;
  pppppppuVar11[1] = (undefined8 ******)0x0;
  pppppppuVar11[2] = (undefined8 ******)0x0;
  *pppppppuVar11 = (undefined8 ******)0x0;
  if ((long)local_b0 < 0) {
    operator_delete(local_c0);
  }
  if (local_c1 < '\0') {
    operator_delete(local_d8[0]);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if (-1 < local_70) {
    return;
  }
  operator_delete(local_80);
  return;
}

