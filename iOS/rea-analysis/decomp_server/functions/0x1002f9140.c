// rea decompile_all
// name: FUN_1002f9140
// address: 0x1002f9140
// body: available
// range: 0x1002f9140-0x1002f9437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002f9140(undefined8 param_1,ID param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ID IVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  long alStack_a0 [5];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  alStack_a0[3] = param_1;
  alStack_a0[4] = param_2;
  __s10Foundation3URLVMa();
  alStack_a0[1] = *(long *)(lVar4 + -8);
  lVar13 = (long)alStack_a0 - (*(long *)(alStack_a0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a84710;
  alStack_a0[2] = lVar4;
  FUN_100004bb4(&DAT_100a84710,&DAT_1008190f0);
  lVar15 = lVar13 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1002f9800();
  lVar4 = _TtC9Alamofire13UploadRequest::uploadable;
  lVar12 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar14 = (undefined8 *)(lVar15 - uVar10);
  lVar11 = (long)puVar14 - uVar10;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire13UploadRequest::uploadable,auStack_78,0,0);
  FUN_10007f314(unaff_x20 + lVar4,lVar15,&DAT_100a84710,&DAT_1008190f0);
  lVar4 = lVar15;
  (**(code **)(lVar12 + 0x30))(lVar15,1,lVar6);
  if ((int)lVar4 != 1) {
    FUN_1002f9814(lVar15,lVar11);
    FUN_100082394(lVar11,puVar14,FUN_1002f9800);
    puVar7 = puVar14;
    _swift_getEnumCaseMultiPayload(puVar14,lVar6);
    lVar6 = alStack_a0[2];
    lVar4 = alStack_a0[1];
    if ((int)puVar7 == 0) {
      uVar1 = *puVar14;
      uVar2 = puVar14[1];
      __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
      uVar9 = uVar1;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
      IVar8 = _objc_msgSend(alStack_a0[4],"uploadTaskWithRequest:fromData:",puVar7,uVar9);
      FUN_100006cdc(uVar1,uVar2);
    }
    else if ((int)puVar7 == 1) {
      lVar12 = lVar13;
      (**(code **)(alStack_a0[1] + 0x20))(lVar13,puVar14,alStack_a0[2]);
      __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
      lVar15 = lVar12;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      IVar8 = _objc_msgSend(alStack_a0[4],"uploadTaskWithRequest:fromFile:",lVar12,lVar15);
      (**(code **)(lVar4 + 8))(lVar13,lVar6);
    }
    else {
      FUN_1000d27dc(puVar14,FUN_1002f9800);
      __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
      IVar8 = _objc_msgSend(alStack_a0[4],"uploadTaskWithStreamedRequest:",puVar14);
    }
    FUN_1000d27dc(lVar11,FUN_1002f9800);
    return IVar8;
  }
  FUN_100040bb4(lVar15,&DAT_100a84710,&DAT_1008190f0);
  *(undefined4 *)(lVar11 + -8) = 0;
  *(undefined8 *)(lVar11 + -0x10) = 0x70;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000050,0x80000001008aa6e0,
             "Alamofire/UploadRequest.swift",0x1d,2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f9438);
  (*pcVar3)();
}

