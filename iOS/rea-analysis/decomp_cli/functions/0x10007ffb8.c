// rea decompile_all
// name: FUN_10007ffb8
// address: 0x10007ffb8
// body: available
// range: 0x10007ffb8-0x1000801e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007ffb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  undefined8 auStack_80 [4];
  
  lVar8 = 0;
  __sSqMa();
  lVar14 = *(long *)(lVar8 + -8);
  lVar3 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)&local_a0 + lVar3;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar11 = *(long *)(unaff_x20 + 0x70);
  FUN_100001400(unaff_x20 + 0x50,uVar1);
  (**(code **)(lVar11 + 0x20))(&local_a0,uVar1,lVar11);
  if (local_88 != 0) {
    FUN_100020a9c(&local_a0,auStack_80);
    FUN_100033a18(auStack_80,&local_a0);
    puVar4 = PTR___sypN_1000f0728;
    uVar9 = uVar13;
    _swift_dynamicCast(uVar13,&local_a0,PTR___sypN_1000f0728 + 8,param_3,6);
    if ((uVar9 & 1) == 0) {
      (**(code **)(*(long *)(param_3 + -8) + 0x38))(uVar13,1,1,param_3);
      (**(code **)(lVar14 + 8))(uVar13,lVar8);
      local_a0 = 0;
      uStack_98 = 0xe000000000000000;
      puVar10 = auStack_80;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (puVar10,&local_a0,puVar4 + 8,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      uVar6 = uStack_98;
      uVar5 = local_a0;
      uVar1 = *(undefined8 *)(unaff_x20 + 8);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
      FUN_100083864();
      _swift_allocError(&DAT_1000fa958,puVar10,0,0);
      *puVar10 = uVar5;
      puVar10[1] = uVar6;
      puVar10[2] = uVar1;
      puVar10[3] = uVar2;
      puVar10[4] = uVar12;
      *(undefined1 *)(puVar10 + 5) = 0;
      _swift_willThrow();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar12);
      FUN_100001428(auStack_80);
    }
    else {
      FUN_100001428(auStack_80);
      lVar11 = *(long *)(param_3 + -8);
      (**(code **)(lVar11 + 0x38))(uVar13,0,1,param_3);
      (**(code **)(lVar11 + 0x20))(param_1,uVar13,param_3);
    }
    return;
  }
  FUN_10001fc18(&local_a0,&DAT_100104198,&DAT_1000d5180);
  *(undefined4 *)((long)auStack_a8 + lVar3) = 0;
  *(undefined8 *)((long)&uStack_b0 + lVar3) = 0x110;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"ArgumentParser/ArgumentDecoder.swift",0x24,2)
  ;
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1000801e8);
  (*pcVar7)();
}

