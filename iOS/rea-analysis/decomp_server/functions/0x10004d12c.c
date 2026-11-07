// rea decompile_all
// name: FUN_10004d12c
// address: 0x10004d12c
// body: available
// range: 0x10004d12c-0x10004d36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10004d12c(void)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined *local_70 [4];
  
  IVar6 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar6 == 0) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    FUN_100004bb4(&DAT_100a76318,&DAT_10080ab28);
    __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF(local_70,FUN_100082258);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x70,local_70,0,0);
    lVar11 = *(long *)(unaff_x20 + 0x70);
    uVar10 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if ((long)uVar10 < 0x40) {
      uVar13 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar13 = uVar13 & *(ulong *)(lVar11 + 0x40);
    _swift_bridgeObjectRetain_n(lVar11,2);
    lVar12 = 0;
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    while( true ) {
      while (uVar13 != 0) {
        uVar3 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 - 1 & uVar13;
        lVar1 = *(long *)(lVar11 + 0x38) +
                (lVar12 << 0xd | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 7);
        if (*(char *)(lVar1 + 0x7c) == '\x02') {
          uVar2 = *(undefined4 *)(lVar1 + 0x60);
          puVar7 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_100033f28(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
          }
          uVar3 = *(ulong *)(puVar8 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_100033f28(puVar9,uVar3 + 1,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar3 + 1;
          *(undefined4 *)(puVar9 + uVar3 * 4 + 0x20) = uVar2;
        }
      }
      bVar5 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10004d370);
        (*pcVar4)();
      }
      if ((long)(uVar10 + 0x3f >> 6) <= lVar12) break;
      uVar13 = ((ulong *)(lVar11 + 0x40))[lVar12];
    }
    _swift_bridgeObjectRelease(lVar11);
    _swift_release(lVar11);
    puVar7 = puVar9;
    FUN_100074ee0(puVar9,PTR___ss5Int32VN_100995c78,PTR___ss5Int32VSHsWP_100995c88,&DAT_100a75a60,
                  &DAT_100809b10);
    _swift_bridgeObjectRelease(puVar9);
    local_70[0] = puVar7;
  }
  return local_70[0];
}

