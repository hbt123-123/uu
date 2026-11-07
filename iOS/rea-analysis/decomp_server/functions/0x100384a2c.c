// rea decompile_all
// name: FUN_100384a2c
// address: 0x100384a2c
// body: available
// range: 0x100384a2c-0x100384bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100384a2c(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *******pppppppuVar4;
  ulong uVar5;
  char *pcVar6;
  void *pvVar7;
  void **ppvVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  void *local_a8 [2];
  char local_91;
  undefined8 *******local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 *******local_70;
  undefined8 uStack_68;
  long local_60;
  
  local_70 = (undefined8 *******)0x0;
  uStack_68 = 0;
  local_60 = 0;
  bVar3 = param_2[0x17];
  pcVar1 = *(char **)param_2;
  uVar2 = *(ulong *)(param_2 + 8);
  uVar5 = uVar2;
  pcVar6 = pcVar1;
  if (-1 < (char)bVar3) {
    uVar5 = (ulong)bVar3;
    pcVar6 = param_2;
  }
  while( true ) {
    if (uVar5 == 0) {
      if ((char)bVar3 < '\0') {
        FUN_100384eb8(param_1,pcVar1,uVar2);
      }
      else {
        uVar10 = *(undefined8 *)param_2;
        param_1[1] = *(undefined8 *)(param_2 + 8);
        *param_1 = uVar10;
        param_1[2] = *(undefined8 *)(param_2 + 0x10);
      }
      return;
    }
    pvVar7 = _memchr("\\/:*?\"<>|",(int)*pcVar6,10);
    if (pvVar7 != (void *)0x0) break;
    uVar5 = uVar5 - 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_100384950(&local_90,param_2);
  uStack_68 = pvStack_88;
  local_70 = local_90;
  local_60 = (long)local_80;
  _pthread_once((pthread_once_t *)&DAT_100a89108,FUN_100384ca8);
  FUN_100384ff4(local_a8,"specialCharacter");
  ppvVar8 = local_a8;
  std::string::append((char *)ppvVar8);
  pvStack_88 = ppvVar8[1];
  local_90 = *ppvVar8;
  local_80 = ppvVar8[2];
  ppvVar8[1] = (void *)0x0;
  ppvVar8[2] = (void *)0x0;
  *ppvVar8 = (void *)0x0;
  pppppppuVar4 = local_70;
  if (-1 < local_60) {
    pppppppuVar4 = &local_70;
  }
  pppppppuVar9 = &local_90;
  std::string::append((char *)pppppppuVar9,(ulong)pppppppuVar4);
  ppppppuVar12 = pppppppuVar9[1];
  ppppppuVar11 = *pppppppuVar9;
  param_1[2] = pppppppuVar9[2];
  param_1[1] = ppppppuVar12;
  *param_1 = ppppppuVar11;
  pppppppuVar9[1] = (undefined8 ******)0x0;
  pppppppuVar9[2] = (undefined8 ******)0x0;
  *pppppppuVar9 = (undefined8 ******)0x0;
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (-1 < local_60) {
    return;
  }
  operator_delete(local_70);
  return;
}

