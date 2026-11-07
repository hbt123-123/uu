// rea decompile_all
// name: FUN_1005ce6e8
// address: 0x1005ce6e8
// body: available
// range: 0x1005ce6e8-0x1005ce7bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ce6e8(undefined8 param_1,uint param_2,long param_3,long param_4,long param_5,
                  uint param_6,long param_7)

{
  int iVar1;
  undefined4 extraout_var;
  ulong local_b0;
  long lStack_a8;
  long lStack_a0;
  long local_98;
  ulong local_90;
  timeval tStack_88;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_50 [8];
  long local_48;
  undefined8 uVar2;
  
  if ((((param_2 < 6) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_7 != 0)))) {
    FUN_1005ce7d4(auStack_50,param_1);
    if (local_48 != 0) {
      local_60 = 0;
      uStack_78 = 0;
      tStack_88.tv_usec = 0;
      tStack_88._12_4_ = 0;
      local_68 = 0;
      local_70 = 0;
      tStack_88.tv_sec = 0;
      local_b0 = (ulong)param_2;
      local_90 = (ulong)param_6;
      lStack_a8 = param_3;
      lStack_a0 = param_4;
      local_98 = param_5;
      iVar1 = _gettimeofday(&tStack_88,(void *)0x0);
      uVar2 = CONCAT44(extraout_var,iVar1);
      FUN_100697e58();
      uStack_78 = uVar2;
      FUN_100697ecc();
      local_70 = uVar2;
      FUN_100697ef8();
      local_68 = uVar2;
      FUN_1006a9710(local_48,&local_b0,param_7);
    }
    FUN_1005ce830(auStack_50);
  }
  return;
}

