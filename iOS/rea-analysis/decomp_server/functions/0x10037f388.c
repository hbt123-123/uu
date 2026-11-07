// rea decompile_all
// name: FUN_10037f388
// address: 0x10037f388
// body: available
// range: 0x10037f388-0x10037f593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037f388(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  void *local_90 [2];
  char local_79;
  undefined8 ***local_78 [2];
  char local_61;
  undefined8 **local_60;
  undefined8 **ppuStack_58;
  undefined8 **local_50;
  
  if (param_4 == (undefined8 *)0x0) {
    sVar1 = DAT_100b366e8;
    if (-1 < (char)DAT_100b366f0._7_1_) {
      sVar1 = (ulong)DAT_100b366f0._7_1_;
    }
    FUN_1003856e0(local_78,sVar1 + 1,local_90);
    ppppuVar4 = (undefined8 ****)local_78[0];
    if (-1 < local_61) {
      ppppuVar4 = local_78;
    }
    if (sVar1 != 0) {
      puVar2 = DAT_100b366e0;
      if (-1 < (char)DAT_100b366f0._7_1_) {
        puVar2 = &DAT_100b366e0;
      }
      _memmove(ppppuVar4,puVar2,sVar1);
    }
    *(undefined2 *)((long)ppppuVar4 + sVar1) = 0x2f;
    FUN_100384a2c(local_90,param_2);
    ppvVar3 = local_90[0];
    if (-1 < local_79) {
      ppvVar3 = local_90;
    }
    ppppuVar4 = local_78;
    std::string::append((char *)ppppuVar4,(ulong)ppvVar3);
    ppuStack_58 = ppppuVar4[1];
    local_60 = *ppppuVar4;
    local_50 = ppppuVar4[2];
    ppppuVar4[1] = (undefined8 ***)0x0;
    ppppuVar4[2] = (undefined8 ***)0x0;
    *ppppuVar4 = (undefined8 ***)0x0;
    pppuVar5 = &local_60;
    std::string::append((char *)pppuVar5);
  }
  else {
    sVar1 = param_4[1];
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      sVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    }
    FUN_1003856e0(local_78,sVar1 + 1,local_90);
    ppppuVar4 = (undefined8 ****)local_78[0];
    if (-1 < local_61) {
      ppppuVar4 = local_78;
    }
    if (sVar1 != 0) {
      puVar2 = (void *)*param_4;
      if (-1 < *(char *)((long)param_4 + 0x17)) {
        puVar2 = param_4;
      }
      _memmove(ppppuVar4,puVar2,sVar1);
    }
    *(undefined2 *)((long)ppppuVar4 + sVar1) = 0x2f;
    FUN_100384a2c(local_90,param_2);
    ppvVar3 = local_90[0];
    if (-1 < local_79) {
      ppvVar3 = local_90;
    }
    ppppuVar4 = local_78;
    std::string::append((char *)ppppuVar4,(ulong)ppvVar3);
    ppuStack_58 = ppppuVar4[1];
    local_60 = *ppppuVar4;
    local_50 = ppppuVar4[2];
    ppppuVar4[1] = (undefined8 ***)0x0;
    ppppuVar4[2] = (undefined8 ***)0x0;
    *ppppuVar4 = (undefined8 ***)0x0;
    pppuVar5 = &local_60;
    std::string::append((char *)pppuVar5);
  }
  ppuVar6 = *pppuVar5;
  param_1[1] = pppuVar5[1];
  *param_1 = ppuVar6;
  param_1[2] = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return;
}

