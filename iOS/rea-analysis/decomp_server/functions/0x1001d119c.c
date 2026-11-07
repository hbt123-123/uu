// rea decompile_all
// name: FUN_1001d119c
// address: 0x1001d119c
// body: available
// range: 0x1001d119c-0x1001d13ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d119c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  puVar3 = (undefined *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  _swift_beginAccess(param_2 + 0x10,auStack_70,0,0);
  puVar4 = (undefined *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (puVar4 == (undefined *)0x0) goto LAB_1001d12c8;
  if ((puVar4[0x31] & 1) == 0) {
    _swift_beginAccess(puVar4 + 0x48,auStack_88,0,0);
    lVar8 = *(long *)(puVar4 + 0x48);
    if (*(long *)(lVar8 + 0x10) != 0) {
      _swift_beginAccess(puVar4 + 0x48,auStack_a0,0x21,0);
      uVar1 = *(undefined8 *)(lVar8 + 0x20);
      uVar2 = *(undefined8 *)(lVar8 + 0x28);
      FUN_100008184(uVar1,uVar2);
      FUN_100082504(0,1);
      _swift_endAccess(auStack_a0);
      FUN_100006cdc(uVar1,uVar2);
      lVar8 = *(long *)(puVar4 + 0x48);
    }
    puVar4[0x50] = 0;
    if (*(long *)(lVar8 + 0x10) == 0) {
      if (puVar4[0x52] == '\x01') {
        puVar4[0x51] = 0;
        FUN_1001cd2ec(*(undefined8 *)(puVar4 + 0x18),*(undefined8 *)(puVar4 + 0x20),1);
        goto LAB_1001d12bc;
      }
      if (puVar4[0x51] == '\x01') {
        puVar4[0x51] = 0;
        puVar5 = &DAT_1009a33f8;
        _swift_allocObject(&DAT_1009a33f8,0x18,7);
        _swift_weakInit(puVar5 + 0x10,puVar3);
        puVar6 = &DAT_1009a3498;
        _swift_allocObject(&DAT_1009a3498,0x18,7);
        _swift_weakInit(puVar6 + 0x10,puVar4);
        puVar7 = &DAT_1009a3650;
        _swift_allocObject(&DAT_1009a3650,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar5;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        _swift_retain(puVar5);
        _swift_retain(puVar6);
        __s7Network12NWConnectionC7receive23minimumIncompleteLength07maximumF010completionySi_Siy10Foundation4DataVSg_AC14ContentContextCSgSbAA7NWErrorOSgtctF
                  (1,0x10000,thunk_FUN_1001d31e8,puVar7);
        _swift_release(puVar3);
        _swift_release(puVar4);
        _swift_release(puVar5);
        _swift_release(puVar6);
        puVar3 = puVar7;
        goto LAB_1001d12c8;
      }
    }
    FUN_1001d0f9c(puVar4);
  }
LAB_1001d12bc:
  _swift_release(puVar3);
  puVar3 = puVar4;
LAB_1001d12c8:
  _swift_release(puVar3);
  return;
}

