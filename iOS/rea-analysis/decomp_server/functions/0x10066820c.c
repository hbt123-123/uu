// rea decompile_all
// name: FUN_10066820c
// address: 0x10066820c
// body: available
// range: 0x10066820c-0x100668563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100668300) */
/* WARNING: Removing unreachable block (ram,0x000100668518) */

undefined8 FUN_10066820c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar7 = (uint)param_2;
  uVar1 = uVar7 >> 6 & 3;
  uVar6 = param_1;
  if (uVar1 == 0) {
    FUN_1006746d8(0);
    _swift_initStackObject();
LAB_1006682c8:
    FUN_100673404(param_2);
  }
  else {
    if (uVar1 == 1) {
      uVar2 = 0;
      FUN_100675e24(0);
      _swift_initStackObject();
      param_2 = (ulong)(uVar7 & 0x3f);
      FUN_1006747e8(param_2,uVar2);
      _swift_bridgeObjectRetain(param_1);
      FUN_1006748ac();
      goto LAB_100668290;
    }
    uVar7 = uVar7 & 0xff;
    if (uVar7 < 0x82) {
      if (uVar7 == 0x80) {
        lVar3 = 0;
        FUN_100669640();
        _swift_initStackObject();
        *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        puVar5 = &DAT_100ab7cb8;
        FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
        puVar4 = puVar5;
        _swift_initStaticObject();
        *(undefined **)(lVar3 + 0x20) = puVar4;
        puVar4 = puVar5;
        _swift_initStaticObject(puVar5,&DAT_100ab1170);
        *(undefined **)(lVar3 + 0x28) = puVar4;
        _swift_initStaticObject(puVar5,&DAT_100ab1298);
        *(undefined **)(lVar3 + 0x30) = puVar5;
        _swift_bridgeObjectRetain(param_1);
        FUN_100668e34();
        _swift_bridgeObjectRelease(param_1);
        _swift_setDeallocating(lVar3);
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
        return uVar6;
      }
      param_2 = 0;
      FUN_1006730b4();
      _swift_initStackObject();
      *(undefined **)(param_2 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      puVar5 = &DAT_100ab7cb8;
      FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
      _swift_initStaticObject();
      *(undefined **)(param_2 + 0x20) = puVar5;
      _swift_bridgeObjectRetain(param_1);
      FUN_1006727b8();
      goto LAB_100668290;
    }
    if (uVar7 != 0x82) {
      if (uVar7 == 0x83) {
        FUN_1006746d8(0);
        _swift_initStackObject();
        param_2 = 2;
      }
      else {
        FUN_1006746d8(0);
        _swift_initStackObject();
        param_2 = 3;
      }
      goto LAB_1006682c8;
    }
    FUN_1006746d8(0);
    _swift_initStackObject();
    param_2 = 1;
    FUN_100673404(1);
  }
  _swift_bridgeObjectRetain(param_1);
  FUN_100673628();
LAB_100668290:
  _swift_release(param_2);
  _swift_bridgeObjectRelease(param_1);
  return uVar6;
}

