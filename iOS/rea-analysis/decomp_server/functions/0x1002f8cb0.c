// rea decompile_all
// name: FUN_1002f8cb0
// address: 0x1002f8cb0
// body: available
// range: 0x1002f8cb0-0x1002f8fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002f8cb0(void)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  FUN_1002c76a8();
  lVar3 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_c0 + lVar3;
  puVar4 = &DAT_100a84710;
  FUN_100004bb4(&DAT_100a84710,&DAT_1008190f0);
  lVar13 = lVar8 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1002f9800();
  lVar15 = _TtC9Alamofire13UploadRequest::uploadable;
  lVar16 = *(long *)(lVar5 + -8);
  uVar7 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = (undefined8 *)(lVar13 - uVar7);
  lVar9 = (long)puVar10 - uVar7;
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire13UploadRequest::uploadable,auStack_78,0,0);
  FUN_10007f314(unaff_x20 + lVar15,lVar13,&DAT_100a84710,&DAT_1008190f0);
  lVar15 = lVar13;
  (**(code **)(lVar16 + 0x30))(lVar13,1,lVar5);
  if ((int)lVar15 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a84710,&DAT_1008190f0);
    pcVar1 = "Attempting to access the input stream but the uploadable doesn\'t exist.";
    *(undefined4 *)(lVar9 + -8) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 0x88;
    uVar11 = 0xd000000000000047;
  }
  else {
    FUN_1002f9814(lVar13,lVar9);
    FUN_100082394(lVar9,puVar10,FUN_1002f9800);
    puVar6 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,lVar5);
    if ((int)puVar6 == 2) {
      uVar11 = *puVar10;
      plVar14 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
      uVar12 = *(undefined8 *)(plVar14[2] + 0x10);
      _os_unfair_lock_lock(uVar12);
      lVar15 = *(long *)(*plVar14 + 0x60);
      _swift_beginAccess((long)plVar14 + lVar15,auStack_b8,0,0);
      FUN_100082394((long)plVar14 + lVar15,lVar8,FUN_1002c76a8);
      FUN_10007f314(&stack0x00000030 + lVar3,auStack_a0,&DAT_100a82c40,&DAT_100817200);
      FUN_1000d27dc(lVar8,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar12);
      if (local_88 == 0) {
        FUN_1000d27dc(lVar9,FUN_1002f9800);
        FUN_100040bb4(auStack_a0,&DAT_100a82c40,&DAT_100817200);
      }
      else {
        FUN_10003f030(auStack_a0,local_88);
        (**(code **)(local_80 + 0x140))();
        FUN_1000d27dc(lVar9,FUN_1002f9800);
        FUN_10003f094(auStack_a0);
      }
      return uVar11;
    }
    FUN_1000d27dc(puVar10,FUN_1002f9800);
    pcVar1 = "Attempted to access the stream of an UploadRequest that wasn\'t created with one.";
    *(undefined4 *)(lVar9 + -8) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 0x8c;
    uVar11 = 0xd000000000000050;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar11,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
             "Alamofire/UploadRequest.swift",0x1d,2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f8fcc);
  (*pcVar2)();
}

