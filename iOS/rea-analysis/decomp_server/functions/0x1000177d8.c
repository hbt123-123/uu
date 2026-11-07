// rea decompile_all
// name: FUN_1000177d8
// address: 0x1000177d8
// body: available
// range: 0x1000177d8-0x100017967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000177d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_78 [24];
  
  puVar4 = auStack_78;
  _swift_beginAccess(unaff_x20 + 0xb8,puVar4,0x21,0);
  lVar3 = param_1;
  thunk_FUN_1001a2c34();
  if (((ulong)puVar4 & 1) == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    iVar2 = (int)*(undefined8 *)(unaff_x20 + 0xb8);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(unaff_x20 + 0xb8);
    *(undefined8 *)(unaff_x20 + 0xb8) = 0x8000000000000000;
    if (iVar2 == 0) {
      FUN_100062938();
    }
    puVar5 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x18);
    uVar8 = *puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 1);
    uVar7 = puVar5[2];
    FUN_10006be54(lVar3,lVar6);
    *(long *)(unaff_x20 + 0xb8) = lVar6;
    _swift_endAccess(auStack_78);
    _swift_retain(uVar7);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(uVar7);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a8 = (undefined4)param_1;
    local_c0 = uVar8;
    local_b8 = uVar1;
    local_b0 = uVar7;
    local_a0 = param_2;
    uStack_98 = param_3;
    FUN_1003fb48c(thunk_FUN_10003fc58,auStack_d0,0xd0000000000000a9,0x8000000100877660,
                  0xd000000000000032,0x8000000100878eb0,0x7eb,0);
    _swift_release(uVar7);
  }
  return;
}

