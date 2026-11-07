// rea decompile_all
// name: FUN_1001803d4
// address: 0x1001803d4
// body: available
// range: 0x1001803d4-0x1001806bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001806bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001803d4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  ID IVar9;
  long lVar10;
  byte abStack_80 [16];
  byte abStack_70 [16];
  byte abStack_60 [7];
  char local_59;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  pbVar6 = abStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a77ce8;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar8 = pbVar6 + -extraout_x8_00;
  FUN_10017e5cc(pbVar8,param_1,param_2);
  pbVar4 = pbVar8;
  _swift_getEnumCaseMultiPayload(pbVar8,puVar3);
  if ((int)pbVar4 == 1) {
    uVar1 = (uint)*pbVar8;
    uVar7 = 1;
  }
  else {
    pbVar4 = pbVar6;
    pbVar5 = pbVar8;
    (**(code **)(lVar10 + 0x20))(pbVar6,pbVar8,lVar2);
    local_59 = '\0';
    IVar9 = *(ID *)(unaff_x20 + 0x10);
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pbVar5);
    IVar9 = _objc_msgSend(IVar9,"fileExistsAtPath:isDirectory:",pbVar4,&local_59);
    if ((int)IVar9 == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(byte **)(pbVar8 + -0x10) = pbVar6;
      FUN_1003fb4ec(FUN_1001806c0,pbVar8 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                    0xd000000000000020,0x8000000100897460,0x5c,0);
      (**(code **)(lVar10 + 8))(pbVar6,lVar2);
      uVar7 = 1;
      uVar1 = 10;
    }
    else if (local_59 == '\x01') {
      pbVar4 = pbVar6;
      FUN_10017e924(pbVar6);
      uVar1 = (uint)pbVar4;
      uVar7 = uVar1 >> 8 & 1;
      (**(code **)(lVar10 + 8))(pbVar6,lVar2);
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(byte **)(pbVar8 + -0x10) = pbVar6;
      FUN_1003fb4ec(FUN_1001806c8,pbVar8 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                    0xd000000000000020,0x8000000100897460,0x60,0);
      (**(code **)(lVar10 + 8))(pbVar6,lVar2);
      uVar7 = 1;
      uVar1 = 4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return uVar1 & 0xff | uVar7 << 8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

