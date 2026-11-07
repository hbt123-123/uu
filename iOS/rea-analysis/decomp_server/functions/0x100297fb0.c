// rea decompile_all
// name: FUN_100297fb0
// address: 0x100297fb0
// body: available
// range: 0x100297fb0-0x1002980ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100297fb0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  ulong local_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  lVar4 = param_2;
  FUN_1002d3c9c();
  if (lVar4 == 0) {
    local_78 = param_1;
    lStack_70 = param_2;
    FUN_100008184(param_1,param_2);
    puVar2 = &DAT_100a82788;
    FUN_100004bb4(&DAT_100a82788,&DAT_100816f50);
    _swift_dynamicCast(&local_a0,&local_78,PTR___s10Foundation4DataVN_1009961e8,puVar2,6);
    if ((uVar3 & 1) == 0) {
      local_80 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      FUN_100040bb4(&local_a0,&DAT_100a82790,&DAT_1008178d0);
    }
    else {
      FUN_1000a0074(&local_a0,auStack_68);
      uVar1 = uStack_48;
      uVar3 = local_50;
      FUN_10003f030(auStack_68,local_50);
      __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(uVar3,uVar1);
      if ((uVar3 & 1) != 0) {
        FUN_10003f030(auStack_68,local_50);
        __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
                  (&local_a0,FUN_1002d38c0,0,PTR___sSSN_1009957f8,local_50,uStack_48);
        FUN_10003f094(auStack_68);
        return;
      }
      FUN_10003f094(auStack_68);
    }
    FUN_1002d3858(param_1,param_2);
  }
  return;
}

