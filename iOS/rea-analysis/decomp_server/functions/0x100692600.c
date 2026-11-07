// rea decompile_all
// name: FUN_100692600
// address: 0x100692600
// body: available
// range: 0x100692600-0x10069284b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


string * FUN_100692600(char *param_1,uint param_2,string *param_3)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  void *pvVar4;
  size_t sVar5;
  string *psVar6;
  ulong uVar7;
  void *local_a0 [2];
  char local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  uint local_48 [2];
  
  if (param_1 == (char *)0x0) {
    return (string *)0x0;
  }
  if (param_2 == 0) {
    return (string *)0x0;
  }
  if (*param_1 == '\0') {
    return (string *)0x0;
  }
  psVar6 = param_3 + 8;
  FUN_10069eda0();
  iVar2 = (int)param_3;
  if (((ulong)psVar6 & 1) == 0) {
    iVar1 = iVar2 + 8;
    FUN_10069ed60();
    if (iVar1 != 0) {
      iVar1 = iVar2 + 8;
      FUN_10069ed60();
      if (iVar1 != 0) {
        FUN_10069ed84(param_3 + 8);
      }
    }
  }
  iVar2 = iVar2 + 8;
  FUN_10069ed60();
  if (iVar2 != 0) {
    psVar6 = param_3 + 8;
    FUN_10069eda0();
    if (((ulong)psVar6 & 1) != 0) {
      return (string *)0x0;
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = 0;
  FUN_1006928dc(local_a0,param_1);
  std::string::operator=(param_3,(string *)&local_60);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  local_88 = CONCAT44(local_88._4_4_,2);
  FUN_1006928dc(local_a0,param_1);
  FUN_10069a9a4(local_48,local_a0,0);
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  if (local_48[0] < 2) {
    local_70 = (ulong)param_2;
  }
  FUN_100692884(param_3,&local_88);
  psVar6 = param_3 + 8;
  FUN_10069eda0();
  if (((ulong)psVar6 & 1) == 0) {
    psVar6 = param_3 + 8;
    FUN_10069ed60();
    if ((1 < local_48[0]) || ((int)psVar6 == 0)) goto LAB_10069272c;
    pFVar3 = _fopen(param_1,"rb+");
    if (pFVar3 == (FILE *)0x0) {
      FUN_10069ed84(param_3 + 8);
      FUN_1006928dc(local_a0,param_1);
      FUN_10069a560(local_a0,0);
      if (local_89 < '\0') {
        operator_delete(local_a0[0]);
      }
    }
    else {
      uVar7 = (ulong)param_2;
      pvVar4 = operator_new__(uVar7);
      _bzero(pvVar4,uVar7);
      sVar5 = _fwrite(pvVar4,1,uVar7,pFVar3);
      if (sVar5 == param_2) {
        _fclose(pFVar3);
        operator_delete__(pvVar4);
        psVar6 = (string *)0x1;
        goto LAB_10069272c;
      }
      FUN_10069ed84(param_3 + 8);
      _fclose(pFVar3);
      FUN_1006928dc(local_a0,param_1);
      FUN_10069a560(local_a0,0);
      if (local_89 < '\0') {
        operator_delete(local_a0[0]);
      }
      operator_delete__(pvVar4);
    }
  }
  psVar6 = (string *)0x0;
LAB_10069272c:
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  return psVar6;
}

