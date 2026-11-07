// rea decompile_all
// name: FUN_1000af74c
// address: 0x1000af74c
// body: available
// range: 0x1000af74c-0x1000af9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000af998) */

undefined1  [16] FUN_1000af74c(long param_1,long param_2)

{
  byte bVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined1 auVar11 [16];
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  ppppuVar10 = *(undefined8 *****)(param_1 + 0x10);
  ppppuVar4 = (undefined8 ****)PTR___swiftEmptyArrayStorage_1000f0740;
  if (ppppuVar10 != (undefined8 ****)0x0) {
    ppppuVar4 = ppppuVar10;
    FUN_100079728(ppppuVar10,0);
    ppppuVar5 = &local_88;
    FUN_10008e0d4(ppppuVar5,ppppuVar4 + 4,ppppuVar10,param_1);
    _swift_bridgeObjectRetain(param_1);
    FUN_10008f124(local_88,uStack_80,local_78,uStack_70,local_68);
    if (ppppuVar5 != ppppuVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000af7dc);
      (*pcVar3)();
    }
  }
  local_88 = ppppuVar4;
  _swift_retain(ppppuVar4);
  FUN_1000afe18(&local_88);
  _swift_release(ppppuVar4);
  if ((undefined8 ***)local_88[2] == (undefined8 ***)0x0) {
    _swift_release();
  }
  else {
    pppuVar7 = (undefined8 ***)local_88[4];
    pppuVar8 = (undefined8 ***)local_88[5];
    pppuVar2 = (undefined8 ***)local_88[6];
    bVar1 = *(byte *)((long)local_88 + 0x31);
    _swift_release();
    if ((bVar1 & 1) == 0) {
      local_88 = (undefined8 ***)0x27;
      uStack_80 = 0xe100000000000000;
      if ((long)pppuVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000af990);
        (*pcVar3)();
      }
      if (*(undefined8 ****)(param_2 + 0x10) <= pppuVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000af994);
        (*pcVar3)();
      }
      param_2 = param_2 + (long)pppuVar7 * 0x10;
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      _swift_bridgeObjectRetain(uVar6);
      __sSS6appendyySSF(uVar9,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      uVar9 = uStack_80;
      pppuVar7 = local_88;
      if (((ulong)pppuVar2 & 1) == 0) {
        if (SCARRY8((long)pppuVar8,2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000af998);
          (*pcVar3)();
        }
        uVar6 = 0xf;
        __sSS5index_8offsetBySS5IndexVAD_SitF(0xf,(long)pppuVar8 + 2,local_88,uStack_80);
        local_88 = (undefined8 ***)0x0;
        uStack_80 = 0xe000000000000000;
        __sSS6appendyySSF(0x27,0xe100000000000000);
        pppuVar8 = pppuVar7;
        __sSSySJSS5IndexVcig(uVar6,pppuVar7,uVar9);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&local_88,uVar6,pppuVar8,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
        _swift_bridgeObjectRelease(pppuVar8);
        __sSS6appendyySSF(0x206e692027,0xe500000000000000);
        __sSS6appendyySSF(pppuVar7,uVar9);
        _swift_bridgeObjectRelease(uVar9);
        pppuVar7 = local_88;
        uVar9 = uStack_80;
      }
      local_88 = (undefined8 ***)0x2067616c66;
      uStack_80 = 0xe500000000000000;
      __sSS6appendyySSF(pppuVar7,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      goto LAB_1000af96c;
    }
  }
  local_88 = (undefined8 ***)0x0;
  uStack_80 = 0;
LAB_1000af96c:
  auVar11._8_8_ = uStack_80;
  auVar11._0_8_ = local_88;
  return auVar11;
}

