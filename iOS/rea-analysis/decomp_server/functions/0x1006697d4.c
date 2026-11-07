// rea decompile_all
// name: FUN_1006697d4
// address: 0x1006697d4
// body: available
// range: 0x1006697d4-0x1006699d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100669864) */
/* WARNING: Removing unreachable block (ram,0x00010066998c) */

undefined8 FUN_1006697d4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = 0;
  uVar4 = param_1;
  if ((param_2 & 1) == 0) {
    FUN_100669640();
    _swift_initStackObject();
    *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    puVar2 = &DAT_100ab7cb8;
    FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
    puVar3 = puVar2;
    _swift_initStaticObject();
    *(undefined **)(lVar1 + 0x20) = puVar3;
    puVar3 = puVar2;
    _swift_initStaticObject(puVar2,&DAT_100ab1170);
    *(undefined **)(lVar1 + 0x28) = puVar3;
    _swift_initStaticObject(puVar2,&DAT_100ab1298);
    *(undefined **)(lVar1 + 0x30) = puVar2;
    _swift_bridgeObjectRetain(param_1);
    FUN_100668e34();
    _swift_bridgeObjectRelease(param_1);
    _swift_setDeallocating(lVar1);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  }
  else {
    FUN_1006730b4();
    _swift_initStackObject();
    *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    puVar2 = &DAT_100ab7cb8;
    FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
    _swift_initStaticObject();
    *(undefined **)(lVar1 + 0x20) = puVar2;
    _swift_bridgeObjectRetain(param_1);
    FUN_1006727b8();
    _swift_release(lVar1);
    _swift_bridgeObjectRelease(param_1);
  }
  return uVar4;
}

