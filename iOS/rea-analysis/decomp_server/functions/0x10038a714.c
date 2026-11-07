// rea decompile_all
// name: FUN_10038a714
// address: 0x10038a714
// body: available
// range: 0x10038a714-0x10038a99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038a714(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *local_50;
  long local_48;
  
  local_48 = *(long *)(param_1 + 0xb8);
  if (local_48 != 0) {
    FUN_100392994();
  }
  FUN_100386734(1,"MMKV_IO.cpp","trim",0x587,"prepare to trim %s");
  local_50 = *(undefined8 **)(param_1 + 0xd0);
  if ((local_50 != (undefined8 *)0x0) && (*(char *)((long)local_50 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_50,*(undefined4 *)(local_50 + 1));
  }
  FUN_10038774c(param_1);
  uVar3 = param_1;
  FUN_1003805d0();
  if ((uVar3 & 1) == 0) {
    pcVar6 = "[%s] file not valid";
    uVar4 = 0x58c;
  }
  else {
    if ((*(byte *)(param_1 + 0x30) >> 5 & 1) == 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        FUN_10038a14c(param_1,0);
      }
      else if (*(ulong *)(param_1 + 0x78) < *(ulong *)(*(long *)(param_1 + 0x80) + 0x28)) {
        FUN_100386f70(param_1,0,0);
        uVar8 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
        uVar3 = uVar8;
        do {
          uVar7 = uVar3;
          uVar3 = uVar7 >> 1;
        } while (*(long *)(param_1 + 0x88) * 2 + 8U < uVar7);
        if (uVar7 <= *(ulong *)(param_1 + 0x78)) {
          uVar7 = *(ulong *)(param_1 + 0x78);
        }
        if (uVar8 == uVar7) {
          FUN_100386734(1,"MMKV_IO.cpp","trim",0x5a3,
                        "there\'s no need to trim %s with size %zu, actualSize %zu");
        }
        else {
          FUN_100386734(1,"MMKV_IO.cpp","trim",0x5a7,"trimming %s from %zu to %zu, actualSize %zu");
          uVar4 = *(undefined8 *)(param_1 + 0x80);
          FUN_10038fe2c(uVar4,uVar7);
          if ((int)uVar4 != 0) {
            lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
            lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x28);
            if (*(void **)(param_1 + 0x90) != (void *)0x0) {
              operator_delete(*(void **)(param_1 + 0x90));
            }
            pvVar5 = operator_new(0x18);
            FUN_10037d560(pvVar5,lVar1 + 4,lVar2 + -4);
            *(void **)(param_1 + 0x90) = pvVar5;
            FUN_10037dc98(pvVar5,*(undefined8 *)(param_1 + 0x88));
            FUN_100386734(1,"MMKV_IO.cpp","trim",0x5b2,"finish trim %s from %zu to %zu");
          }
        }
      }
      goto LAB_10038a88c;
    }
    pcVar6 = "[%s] file readonly";
    uVar4 = 0x590;
  }
  FUN_100386734(2,"MMKV_IO.cpp","trim",uVar4,pcVar6);
LAB_10038a88c:
  FUN_100385fb0(&local_50);
  FUN_100385098(&local_48);
  return;
}

