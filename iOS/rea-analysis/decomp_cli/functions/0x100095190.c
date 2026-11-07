// rea decompile_all
// name: FUN_100095190
// address: 0x100095190
// body: available
// range: 0x100095190-0x100095303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100095190(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  puVar6 = auStack_a0;
  lVar8 = *(long *)(param_2 + 0x10);
  local_90 = param_1;
  if (lVar8 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100095300);
    (*pcVar5)();
  }
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100095304);
    (*pcVar5)();
  }
  _swift_bridgeObjectRetain(param_2);
  if (lVar8 == param_3) {
    uVar9 = 0;
  }
  else {
    puVar4 = (undefined8 *)(param_2 + param_3 * 0x40);
    local_98 = param_2;
    do {
      if (lVar8 <= param_3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000952fc);
        (*pcVar5)();
      }
      uVar10 = puVar4[6];
      if ((uVar10 & 0x6000000000000000) == 0) {
        uVar9 = puVar4[7];
        uVar2 = puVar4[8];
        uVar1 = puVar4[4];
        uVar3 = puVar4[5];
        local_68 = (undefined1)uVar10;
        local_88 = puVar6;
        local_78 = uVar1;
        uStack_70 = uVar3;
        *(undefined8 **)(puVar6 + -0x10) = &local_78;
        FUN_10009583c(uVar1,uVar3,uVar10,uVar9,uVar2);
        FUN_100065610(uVar1,uVar3,uVar10);
        uVar7 = 0;
        FUN_1000b38d0(FUN_100095820,puVar6 + -0x20,local_90);
        FUN_100065628(uVar1,uVar3,uVar10);
        FUN_1000838ec(uVar1,uVar3,uVar10,uVar9,uVar2);
        puVar6 = local_88;
        if ((uVar7 & 1) != 0) {
          uVar9 = 1;
          param_2 = local_98;
          goto LAB_1000952cc;
        }
      }
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 8;
    } while (lVar8 != param_3);
    uVar9 = 0;
    param_2 = local_98;
  }
LAB_1000952cc:
  _swift_bridgeObjectRelease(param_2);
  return uVar9;
}

