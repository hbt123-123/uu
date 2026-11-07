// rea decompile_all
// name: FUN_1006a1ec4
// address: 0x1006a1ec4
// body: available
// range: 0x1006a1ec4-0x1006a2043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a1ec4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,string *param_4,
                  undefined8 param_5)

{
  int iVar1;
  void **ppvVar2;
  int local_90;
  undefined4 uStack_8c;
  char local_79;
  long local_78;
  long *local_70;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100384eb8(&local_50,*param_2,param_2[1]);
  }
  else {
    uStack_48 = param_2[1];
    local_50 = (void *)*param_2;
    local_40 = param_2[2];
  }
  FUN_10069a9a4(&local_68,&local_50,0);
  if ((int)local_68 == 3) {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_10069bb58(&local_78,&local_50);
    while (local_78 != 0) {
      FUN_10069ada4(&local_90,local_78,0);
      if (local_90 == 2) {
        FUN_10069cde4(&local_90,local_78);
        std::string::operator=(param_4,(string *)&local_68);
        if (local_79 < '\0') {
          operator_delete((void *)CONCAT44(uStack_8c,local_90));
        }
        ppvVar2 = &local_68;
        FUN_100693888(ppvVar2,param_3);
        if ((int)ppvVar2 != 0) {
          ppvVar2 = &local_68;
          FUN_100693a1c(ppvVar2,param_4);
          if ((int)ppvVar2 != 0) {
            FUN_1006948c0(param_5,&local_68);
          }
        }
      }
      FUN_10069b24c(&local_78,0);
    }
    if (local_70 != (long *)0x0) {
      LOAcquire();
      iVar1 = (int)local_70[1];
      *(int *)(local_70 + 1) = iVar1 + -1;
      LORelease();
      if (iVar1 == 1) {
        (**(code **)(*local_70 + 0x10))(local_70);
        LOAcquire();
        iVar1 = *(int *)((long)local_70 + 0xc);
        *(int *)((long)local_70 + 0xc) = iVar1 + -1;
        LORelease();
        if (iVar1 == 1) {
          (**(code **)(*local_70 + 0x18))(local_70);
        }
      }
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  return;
}

