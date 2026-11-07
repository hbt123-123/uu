// rea decompile_all
// name: FUN_100159d14
// address: 0x100159d14
// body: available
// range: 0x100159d14-0x10015a1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100159d14(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_1b0 [16];
  long alStack_1a0 [2];
  undefined *local_190;
  undefined *local_188;
  code *local_180;
  long local_178;
  undefined1 auStack_170 [16];
  undefined8 *local_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [200];
  
  puVar3 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  FUN_10015362c();
  FUN_100401b14(0);
  local_160 = param_2;
  FUN_1003fb45c(FUN_10016c124,auStack_170,0xd0000000000000a8,0x8000000100894f80,0xd000000000000035,
                0x8000000100895030,0x42,7);
  puVar4 = puVar3 + 0x10;
  _swift_weakLoadStrong();
  if (puVar4 == (undefined *)0x0) {
    _swift_release(puVar3);
  }
  else {
    puVar5 = param_2;
    local_178 = (long)&local_190 + lVar2;
    FUN_100188714();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 **)((long)alStack_1a0 + lVar2) = puVar5;
    FUN_1003fb45c(FUN_10016c134,auStack_1b0 + lVar2,0xd0000000000000a8,0x8000000100894f80,
                  0xd000000000000035,0x8000000100895030,0x45,7);
    _swift_release(puVar4);
    _swift_release(puVar3);
    if (extraout_x12 != 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)((long)alStack_1a0 + lVar2) = extraout_x12;
      *(undefined8 *)((long)alStack_1a0 + lVar2 + 8) = unaff_x20;
      puVar3 = &DAT_100a7a448;
      FUN_100004bb4(&DAT_100a7a448,&DAT_10080ede8);
      puVar4 = &DAT_100a7a450;
      local_188 = puVar3;
      FUN_10003f840(&DAT_100a7a450,&DAT_100a7a448,&DAT_10080ede8,
                    &TargetProtocolConformanceDescriptor_1008488a0);
      pcVar6 = FUN_10016c13c;
      local_190 = puVar4;
      FUN_10061cca0(FUN_10016c13c,auStack_1b0 + lVar2,puVar3,puVar4);
      lVar7 = 0;
      __s8Dispatch0A13WorkItemFlagsVMa();
      lVar2 = local_178;
      local_180 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      (*local_180)(local_178,1,1,lVar7);
      puVar3 = &DAT_10099fed0;
      _swift_allocObject(&DAT_10099fed0,0x110,7);
      *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
      uVar8 = *param_2;
      uVar10 = param_2[3];
      uVar9 = param_2[2];
      *(undefined8 *)(puVar3 + 0x20) = param_2[1];
      *(undefined8 *)(puVar3 + 0x18) = uVar8;
      *(undefined8 *)(puVar3 + 0x30) = uVar10;
      *(undefined8 *)(puVar3 + 0x28) = uVar9;
      uVar8 = param_2[4];
      *(undefined8 *)(puVar3 + 0x40) = param_2[5];
      *(undefined8 *)(puVar3 + 0x38) = uVar8;
      *(undefined8 *)(puVar3 + 0x48) = param_2[6];
      uVar8 = param_1[0x10];
      uVar10 = param_1[0x13];
      uVar9 = param_1[0x12];
      *(undefined8 *)(puVar3 + 0xd8) = param_1[0x11];
      *(undefined8 *)(puVar3 + 0xd0) = uVar8;
      *(undefined8 *)(puVar3 + 0xe8) = uVar10;
      *(undefined8 *)(puVar3 + 0xe0) = uVar9;
      uVar8 = param_1[0x14];
      uVar10 = param_1[0x17];
      uVar9 = param_1[0x16];
      *(undefined8 *)(puVar3 + 0xf8) = param_1[0x15];
      *(undefined8 *)(puVar3 + 0xf0) = uVar8;
      *(undefined8 *)(puVar3 + 0x108) = uVar10;
      *(undefined8 *)(puVar3 + 0x100) = uVar9;
      uVar8 = param_1[8];
      uVar10 = param_1[0xb];
      uVar9 = param_1[10];
      *(undefined8 *)(puVar3 + 0x98) = param_1[9];
      *(undefined8 *)(puVar3 + 0x90) = uVar8;
      *(undefined8 *)(puVar3 + 0xa8) = uVar10;
      *(undefined8 *)(puVar3 + 0xa0) = uVar9;
      uVar8 = param_1[0xc];
      uVar10 = param_1[0xf];
      uVar9 = param_1[0xe];
      *(undefined8 *)(puVar3 + 0xb8) = param_1[0xd];
      *(undefined8 *)(puVar3 + 0xb0) = uVar8;
      *(undefined8 *)(puVar3 + 200) = uVar10;
      *(undefined8 *)(puVar3 + 0xc0) = uVar9;
      uVar8 = *param_1;
      uVar10 = param_1[3];
      uVar9 = param_1[2];
      *(undefined8 *)(puVar3 + 0x58) = param_1[1];
      *(undefined8 *)(puVar3 + 0x50) = uVar8;
      *(undefined8 *)(puVar3 + 0x68) = uVar10;
      *(undefined8 *)(puVar3 + 0x60) = uVar9;
      uVar8 = param_1[4];
      uVar10 = param_1[7];
      uVar9 = param_1[6];
      *(undefined8 *)(puVar3 + 0x78) = param_1[5];
      *(undefined8 *)(puVar3 + 0x70) = uVar8;
      *(undefined8 *)(puVar3 + 0x88) = uVar10;
      *(undefined8 *)(puVar3 + 0x80) = uVar9;
      puVar4 = &DAT_10099fef8;
      _swift_allocObject(&DAT_10099fef8,0x20,7);
      *(code **)(puVar4 + 0x10) = FUN_10016c20c;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      FUN_10016c274(param_2,auStack_128);
      FUN_1000408d0(param_1,auStack_128);
      FUN_10060edd8();
      _swift_beginAccess();
      uVar8 = param_1[1];
      FUN_1006170a4(uVar8,lVar2,FUN_10016c240,puVar4,local_188,local_190);
      _swift_release(pcVar6);
      _swift_release(puVar4);
      FUN_100040bb4(lVar2,&DAT_100a77040,&DAT_10080e910);
      (*local_180)(lVar2,1,1,lVar7);
      _swift_beginAccess(param_1,auStack_140,0,0);
      uVar9 = param_1[1];
      _swift_beginAccess(param_1,auStack_158,0,0);
      uVar1 = *(undefined1 *)(param_1 + 2);
      puVar3 = &DAT_100a77058;
      FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
      puVar4 = &DAT_100a77060;
      FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                    &TargetProtocolConformanceDescriptor_1008488bc);
      FUN_10060913c(uVar9,lVar2,uVar1,FUN_100008290,0,puVar3,puVar4);
      _swift_release();
      _swift_release(uVar8);
      _swift_release(extraout_x12);
      FUN_100040bb4(lVar2,&DAT_100a77040,&DAT_10080e910);
      return;
    }
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)((long)alStack_1a0 + lVar2) = 0;
  FUN_1003fb45c(FUN_10016c12c,auStack_1b0 + lVar2,0xd0000000000000a4,0x800000010088d870,
                0xd00000000000002e,0x8000000100895070,0x14d,7);
  FUN_10015a2a0(0);
  return;
}

