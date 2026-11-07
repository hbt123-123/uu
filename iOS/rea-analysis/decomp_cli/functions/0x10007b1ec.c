// rea decompile_all
// name: FUN_10007b1ec
// address: 0x10007b1ec
// body: available
// range: 0x10007b1ec-0x10007b37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b1ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  long unaff_x21;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar3 = *(long *)(unaff_x20 + 8);
  _swift_beginAccess(lVar3 + 0x48,auStack_a8,0,0);
  puVar5 = *(undefined8 **)(lVar3 + 0x48);
  uVar4 = puVar5[2];
  _swift_bridgeObjectRetain(puVar5);
  if (uVar4 != 0) {
    uVar7 = 0;
    puVar6 = puVar5 + 4;
    do {
      if ((ulong)puVar5[2] <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10007b368);
        (*pcVar1)();
      }
      FUN_100083ab0(puVar6,&local_e0);
      if (unaff_x21 != 0) {
        _swift_errorRelease();
        FUN_100083afc(&local_e0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10007b37c);
        (*pcVar1)();
      }
      if (local_e0 == param_2) {
        _swift_bridgeObjectRelease(puVar5);
        uStack_88 = uStack_d8;
        local_90 = local_e0;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
        uStack_68 = uStack_b8;
        local_70 = local_c0;
        local_60 = local_b0;
        FUN_10006c8f8(&uStack_80,&local_e0);
        puVar2 = &DAT_100104868;
        FUN_10000eb08(&DAT_100104868,&DAT_1000d51b0);
        _swift_dynamicCast(param_1,&local_e0,puVar2,param_3,7);
        return;
      }
      uVar7 = uVar7 + 1;
      FUN_100083afc(&local_e0);
      puVar6 = puVar6 + 7;
    } while (uVar4 != uVar7);
  }
  _swift_bridgeObjectRelease();
  FUN_100054664();
  _swift_allocError(&DAT_1000fa8c8,puVar5,0,0);
  *puVar5 = 3;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[9] = 0;
  *(undefined1 *)(puVar5 + 10) = 0x11;
  _swift_willThrow();
  return;
}

