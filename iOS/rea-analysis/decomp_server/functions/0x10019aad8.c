// rea decompile_all
// name: FUN_10019aad8
// address: 0x10019aad8
// body: available
// range: 0x10019aad8-0x10019adc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10019aad8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 auStack_f0 [16];
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar8 = &DAT_100a77040;
  local_c8 = param_1;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = -extraout_x8;
  puVar14 = auStack_d0 + lVar7;
  puVar8 = &DAT_100a7c610;
  FUN_100004bb4(&DAT_100a7c610,&DAT_1008103c0);
  puVar9 = &DAT_100a7c618;
  local_c0 = puVar8;
  FUN_10003f840(&DAT_100a7c618,&DAT_100a7c610,&DAT_1008103c0,
                &TargetProtocolConformanceDescriptor_1008488a0);
  pcVar10 = FUN_10019ae1c;
  local_b8 = puVar9;
  FUN_10061cca0(FUN_10019ae1c);
  lVar11 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(puVar14,1,1,lVar11);
  puVar8 = &DAT_1009a1850;
  _swift_allocObject(&DAT_1009a1850,0x20,7);
  *(undefined8 **)(puVar8 + 0x10) = param_2;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  FUN_100008184(param_2,param_3);
  FUN_10060edd8();
  _swift_beginAccess();
  uVar13 = *param_2;
  puVar9 = &DAT_100a7c620;
  FUN_100004bb4(&DAT_100a7c620,&DAT_1008103c8);
  puVar12 = &DAT_100a7c628;
  FUN_10003f840(&DAT_100a7c628,&DAT_100a7c620,&DAT_1008103c8,
                &TargetProtocolConformanceDescriptor_1008488a0);
  FUN_1006177ec(uVar13,puVar14,FUN_10019ae64,puVar8,local_c0,puVar9,local_b8,puVar12);
  _swift_release(pcVar10);
  _swift_release(puVar8);
  FUN_100040bb4(puVar14,&DAT_100a77040,&DAT_10080e910);
  FUN_100615a14(&local_b0);
  if (unaff_x21 == 0) {
    _swift_release(uVar13);
    local_c8[1] = uStack_a8;
    *local_c8 = local_b0;
    local_c8[3] = uStack_98;
    local_c8[2] = local_a0;
    local_c8[5] = uStack_88;
    local_c8[4] = uStack_90;
    local_c8[6] = local_80;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)((long)alStack_e0 + lVar7) = unaff_x21;
    FUN_1003fb4ec(FUN_1000fa9c4,auStack_f0 + lVar7,0xd000000000000099,0x8000000100899c30,
                  &DAT_d000000000000013,0x8000000100899cd0,0x5a,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    FUN_10019ae7c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
    _swift_willThrow();
    _swift_release(uVar13);
  }
  return;
}

