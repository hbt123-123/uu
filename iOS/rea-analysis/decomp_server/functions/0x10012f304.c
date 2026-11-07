// rea decompile_all
// name: FUN_10012f304
// address: 0x10012f304
// body: available
// range: 0x10012f304-0x10012f5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10012f304(ID param_1,long *param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_60 [16];
  long *local_50;
  
  IVar1 = _objc_msgSend(param_1,"protectionSpace");
  IVar1 = _objc_msgSend(IVar1,"isProxy");
  if ((int)IVar1 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = (long *)param_1;
    FUN_1003fb45c(FUN_10012f5ec,auStack_60,0xd0000000000000a1,0x800000010088f360,0xd000000000000014,
                  0x800000010088f410,0x17,0xb);
    uVar2 = 1;
  }
  else {
    local_50 = param_2;
    if (*param_2 == 2) {
      IVar1 = _objc_msgSend(param_1,"previousFailureCount");
      if (IVar1 == 0) {
        FUN_1001310d0();
        uVar2 = 0;
        FUN_100401b14(0);
        if (IVar1 == 0) {
          FUN_1003fb4ec(uVar2,FUN_10012f204,0,0xd0000000000000a1,0x800000010088f360,
                        0xd000000000000014,0x800000010088f410,0x2b,0xb);
          IVar1 = 0;
          uVar2 = 2;
        }
        else {
          (*(code *)PTR____chkstk_darwin_100995498)();
          FUN_1003fb45c(FUN_10012f604,auStack_60,0xd0000000000000a1,0x800000010088f360,
                        0xd000000000000014,0x800000010088f410,0x30,0xb);
          uVar2 = 0;
        }
        goto LAB_10012f4f0;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_50 = (long *)param_1;
      FUN_1003fb4ec(FUN_10012f5fc,auStack_60,0xd0000000000000a1,0x800000010088f360,
                    0xd000000000000014,0x800000010088f410,0x26,0xb);
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
      FUN_1003fb45c(FUN_10012f5f4,auStack_60,0xd0000000000000a1,0x800000010088f360,
                    0xd000000000000014,0x800000010088f410,0x21,0xb);
      uVar2 = 1;
    }
  }
  IVar1 = 0;
LAB_10012f4f0:
  auVar3._8_8_ = IVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}

