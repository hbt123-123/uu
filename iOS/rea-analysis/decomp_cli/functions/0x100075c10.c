// rea decompile_all
// name: FUN_100075c10
// address: 0x100075c10
// body: available
// range: 0x100075c10-0x100075d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100075d3c to 0x1000c2828 _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100075c10(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong unaff_x20;
  undefined1 auStack_68 [16];
  uint local_58;
  byte local_38;
  
  uVar2 = 0;
  if (param_1 != 0) {
    _swift_errorRetain();
    _swift_errorRetain(param_1);
    FUN_1000aaaa0(auStack_68,param_1);
    FUN_1000abe34();
    uVar1 = unaff_x20 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    uVar2 = (uint)local_38;
    if (uVar1 != 0) {
      puVar3 = &DAT_100104520;
      FUN_10000eb08(&DAT_100104520,&DAT_1000d4b80);
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined **)(puVar3 + 0x38) = PTR___sSSN_1000f02f8;
      *(ulong *)(puVar3 + 0x20) = unaff_x20;
      *(ulong *)(puVar3 + 0x28) = param_3;
      if (local_38 == 0) {
        __ss5print_9separator10terminatoryypd_S2StF
                  (puVar3,0x20,0xe100000000000000,10,0xe100000000000000);
        _swift_bridgeObjectRelease(puVar3);
        goto LAB_100075d3c;
      }
      puVar4 = puVar3;
      FUN_10007677c();
      __ss5print_9separator10terminator2toyypd_S2Sxzts16TextOutputStreamRzlF
                (puVar3,0x20,0xe100000000000000,10,0xe100000000000000,param_6,&DAT_1000fb4d0,puVar4)
      ;
      _swift_bridgeObjectRelease(puVar3);
    }
    if ((local_38 != 0) && (uVar2 = local_58, local_38 == 1)) {
      uVar2 = 0x40;
    }
  }
LAB_100075d3c:
                    /* WARNING: Subroutine does not return */
  _exit(uVar2);
}

