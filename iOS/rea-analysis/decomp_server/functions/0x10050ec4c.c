// rea decompile_all
// name: FUN_10050ec4c
// address: 0x10050ec4c
// body: available
// range: 0x10050ec4c-0x10050ee3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010050ee08) */

void FUN_10050ec4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_128 [24];
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined1 auStack_d0 [48];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  do {
    while( true ) {
      lVar6 = *(long *)(unaff_x20 + 0x58);
      if (((0 < lVar6) &&
          (pcVar1 = *(char **)(unaff_x20 + 0x28), pcVar1 != *(char **)(unaff_x20 + 0x30))) &&
         ((*pcVar1 == ',' || (*pcVar1 == ';')))) {
        *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
        FUN_100560bb8();
      }
      uStack_98 = *(undefined8 *)(unaff_x20 + 0x70);
      local_a0 = *(undefined8 *)(unaff_x20 + 0x68);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x80);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_78 = *(undefined8 *)(unaff_x20 + 0x90);
      local_80 = *(undefined8 *)(unaff_x20 + 0x88);
      uVar5 = *(ulong *)(unaff_x20 + 0x98);
      puVar4 = &local_a0;
      FUN_10055dc44(puVar4,uVar5,*(undefined8 *)(unaff_x20 + 0xa0),*(undefined2 *)(unaff_x20 + 0x60)
                   );
      if ((unaff_x21 != 0) || ((uVar5 & 1) != 0)) {
        return;
      }
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050ee3c);
        (*pcVar3)();
      }
      *(long *)(unaff_x20 + 0x58) = lVar6 + 1;
      FUN_10007f314();
      lVar2 = local_108;
      lVar6 = local_110;
      if (local_110 != 0) break;
      FUN_100040bb4(auStack_128,&DAT_100aaa0e8,&DAT_1008358c0);
      uStack_f8 = 0;
      local_100 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
      local_e0 = 0;
LAB_10050ecb0:
      FUN_100040bb4(&local_100,&DAT_100aaa280,&DAT_100835b68);
    }
    FUN_10003f030(auStack_128,local_110);
    (**(code **)(lVar2 + 8))(&local_100,param_2,param_3,puVar4,lVar6,lVar2);
    FUN_10003f094(auStack_128);
    if (local_e8 == 0) goto LAB_10050ecb0;
    thunk_FUN_1000a0074(&local_100,auStack_d0);
    pcVar3 = (code *)&local_100;
    FUN_100505f7c(pcVar3,puVar4);
    FUN_100555620(puVar4);
    (*pcVar3)();
    FUN_10003f094(auStack_d0);
  } while( true );
}

