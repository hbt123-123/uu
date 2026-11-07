// rea decompile_all
// name: FUN_100557cc0
// address: 0x100557cc0
// body: available
// range: 0x100557cc0-0x100557f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100557d90 to 0x1004f9cd4 FUN_1004f9cd4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100557cc0(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  long local_50;
  
  if (((*(long *)(unaff_x20 + 0x10) == 0) ||
      (lVar5 = *(long *)(unaff_x20 + 0x18), *(long *)(lVar5 + 0x10) == 0)) ||
     (lVar6 = param_1, FUN_1003618e4(), (param_2 & 1) == 0)) {
    lVar5 = *(long *)(unaff_x20 + 0x40);
    if ((*(long *)(lVar5 + 0x10) == 0) || (lVar6 = param_1, FUN_1003618e4(), (param_2 & 1) == 0)) {
      lVar5 = *(long *)(unaff_x20 + 0x48);
      if (lVar5 != 0) {
        if ((*(long *)(lVar5 + 0x10) == 0) ||
           (lVar6 = param_1, FUN_1003618e4(param_1), (param_2 & 1) == 0)) {
          local_50 = 0;
          uStack_68 = 0;
          local_70 = 0;
          local_58 = 0;
          uStack_60 = 0;
        }
        else {
          FUN_1000b142c(*(long *)(lVar5 + 0x38) + lVar6 * 0x28,&local_70);
          if (local_58 != 0) {
            puVar2 = &local_70;
            FUN_10003f030(puVar2,local_58);
            lVar6 = *(long *)(local_58 + -8);
            lVar5 = *(long *)(lVar6 + 0x40);
            (**(code **)(lVar6 + 0x10))
                      (auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2,local_58);
            FUN_100040bb4(&local_70,&DAT_100aaa288,&DAT_100836090);
            (**(code **)(local_50 + 0x18))(auStack_98,local_58,local_50);
            (**(code **)(lVar6 + 8))(auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),local_58);
            FUN_10003f030(auStack_98,local_80);
            uVar3 = local_80;
            lVar5 = lStack_78;
            (**(code **)(lStack_78 + 0x10))(local_80,lStack_78);
            FUN_10003f094(auStack_98);
            FUN_100556150(uVar3,lVar5);
            _swift_bridgeObjectRelease(lVar5);
            return;
          }
        }
        FUN_100040bb4(&local_70,&DAT_100aaa288,&DAT_100836090);
      }
      _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 8));
      FUN_1004fa13c();
      if (-1 < param_1) {
        FUN_100556288(param_1);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100557f00);
      (*pcVar1)();
    }
    plVar4 = (long *)(*(long *)(lVar5 + 0x38) + lVar6 * 0x18);
    if ((*(byte *)(plVar4 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100557f04);
      (*pcVar1)();
    }
    lVar6 = *plVar4;
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100557f08);
      (*pcVar1)();
    }
    lVar5 = plVar4[1];
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 8));
    FUN_1004fa13c();
    lVar5 = lVar5 + lVar6;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x38) + lVar6 * 0x50;
    lVar6 = *(long *)(lVar5 + 0x28);
    lVar5 = *(long *)(lVar5 + 0x30);
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 8));
    FUN_1004fa13c();
  }
  FUN_1004f9cd4(lVar6,lVar5);
  return;
}

