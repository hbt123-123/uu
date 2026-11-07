// rea decompile_all
// name: FUN_1000a7000
// address: 0x1000a7000
// body: available
// range: 0x1000a7000-0x1000a72bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000a72a8) */

undefined * FUN_1000a7000(char param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  byte bVar14;
  char local_71;
  undefined *local_70;
  undefined8 uStack_68;
  
  lVar4 = 0x706c6568;
  uVar8 = 0xe400000000000000;
  uVar9 = 0;
  FUN_100096cd8(0x706c6568,0xe400000000000000,0,0,0);
  FUN_100067074();
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar8);
  uVar13 = 0;
  lVar10 = *(long *)(lVar4 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
  do {
    puVar2 = (undefined8 *)(lVar4 + 0x20 + uVar13 * 0x18);
    uVar1 = uVar13;
    do {
      puVar11 = puVar2;
      uVar13 = uVar1 + 1;
      if (uVar13 - lVar10 == 1) {
        _swift_bridgeObjectRelease(lVar4);
        local_70 = puVar7;
        _swift_bridgeObjectRetain(puVar7);
        FUN_1000a72bc(&local_70);
        _swift_bridgeObjectRelease(puVar7);
        return local_70;
      }
      if (*(ulong *)(lVar4 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a72a8);
        (*pcVar3)();
      }
      bVar14 = *(byte *)(puVar11 + 2);
      if (param_1 == '\0') {
        puVar12 = (undefined *)*puVar11;
        uVar8 = puVar11[1];
        FUN_100065610(puVar12,uVar8,bVar14);
        goto LAB_1000a71dc;
      }
      puVar2 = puVar11 + 3;
      uVar1 = uVar13;
    } while (bVar14 >> 6 == 1);
    if (bVar14 >> 6 == 0) {
      uVar8 = *puVar11;
      uVar9 = puVar11[1];
      local_70 = (undefined *)0x0;
      uStack_68 = 0xe000000000000000;
      _swift_bridgeObjectRetain(uVar9);
      __sSS6appendyySSF(uVar8,uVar9);
      __sSS6appendyySSF(0x2d,0xe100000000000000);
      local_71 = param_1;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_71,&local_70,&DAT_1000f7708,PTR___ss26DefaultStringInterpolationVN_1000f05a8
                 ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      FUN_100065628(uVar8,uVar9,bVar14);
      bVar14 = 0;
      puVar12 = local_70;
      uVar8 = uStack_68;
    }
    else {
      uVar8 = *puVar11;
      uVar9 = puVar11[1];
      local_70 = (undefined *)0x0;
      uStack_68 = 0xe000000000000000;
      _swift_bridgeObjectRetain(uVar9);
      __sSS6appendyySSF(uVar8,uVar9);
      __sSS6appendyySSF(0x2d,0xe100000000000000);
      local_71 = param_1;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&local_71,&local_70,&DAT_1000f7670,PTR___ss26DefaultStringInterpolationVN_1000f05a8
                 ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      FUN_100065628(uVar8,uVar9,bVar14);
      bVar14 = 0x80;
      puVar12 = local_70;
      uVar8 = uStack_68;
    }
LAB_1000a71dc:
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_10006edd4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_10006edd4(puVar7,uVar1 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar7 + uVar1 * 0x18 + 0x20) = puVar12;
    *(undefined8 *)(puVar7 + uVar1 * 0x18 + 0x28) = uVar8;
    puVar7[uVar1 * 0x18 + 0x30] = bVar14;
  } while( true );
}

