// rea decompile_all
// name: FUN_10007f640
// address: 0x10007f640
// body: available
// range: 0x10007f640-0x10007f7d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007f640(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  undefined8 auStack_60 [4];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  lVar2 = *(long *)(unaff_x20 + 0x70);
  FUN_100001400(unaff_x20 + 0x50,uVar1);
  (**(code **)(lVar2 + 0x20))(&local_80,uVar1,lVar2);
  if (local_68 != 0) {
    FUN_100020a9c(&local_80,auStack_60);
    FUN_100033a18(auStack_60,&local_80);
    puVar4 = PTR___sypN_1000f0728;
    puVar8 = local_90;
    _swift_dynamicCast(puVar8,&local_80,PTR___sypN_1000f0728 + 8,PTR___sSdN_1000f03b8,6);
    if (((ulong)puVar8 & 1) == 0) {
      local_80 = 0;
      uStack_78 = 0xe000000000000000;
      puVar9 = auStack_60;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (puVar9,&local_80,puVar4 + 8,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      uVar6 = uStack_78;
      uVar5 = local_80;
      uVar1 = *(undefined8 *)(unaff_x20 + 8);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
      FUN_100083864();
      _swift_allocError(&DAT_1000fa958,puVar9,0,0);
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      puVar9[2] = uVar1;
      puVar9[3] = uVar3;
      puVar9[4] = uVar10;
      *(undefined1 *)(puVar9 + 5) = 0;
      _swift_willThrow();
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar10);
      FUN_100001428(auStack_60);
    }
    else {
      FUN_100001428(auStack_60);
    }
    return;
  }
  FUN_10001fc18(&local_80,&DAT_100104198,&DAT_1000d5180);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"ArgumentParser/ArgumentDecoder.swift",0x24,2,
             0x110,0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10007f7d4);
  (*pcVar7)();
}

