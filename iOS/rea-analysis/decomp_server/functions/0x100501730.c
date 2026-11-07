// rea decompile_all
// name: FUN_100501730
// address: 0x100501730
// body: available
// range: 0x100501730-0x1005019c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100501730(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  uint uVar7;
  uint extraout_w8_00;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar10;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [8];
  long local_100;
  undefined1 local_e8;
  char local_e7;
  long local_e0;
  long local_b0;
  undefined1 local_a8;
  undefined8 local_88;
  ulong uStack_80;
  
  if (*(char *)((long)unaff_x20 + 0x21) == '\x03') {
    lVar8 = unaff_x20[0xf];
    lVar1 = lVar8 + -1;
    if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10050196c);
      (*pcVar5)();
    }
    unaff_x20[0xf] = lVar1;
    if (lVar1 < 0) {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,param_1,0,0);
      *param_1 = 6;
      _swift_willThrow();
      uVar7 = extraout_w8;
    }
    else {
      FUN_1005062d0();
      local_a8 = 0;
      local_e8 = 1;
      local_b0 = param_2;
      FUN_100006cc8(local_88,uStack_80);
      uStack_80 = 0xf000000000000000;
      local_88 = 0;
      puVar6 = auStack_108;
      (**(code **)(param_4 + 0x40))(puVar6,&DAT_1009cdc68,&PTR_PTR_1009cdcb0,param_3,param_4);
      uVar4 = uStack_80;
      uVar3 = local_88;
      if (unaff_x21 == 0) {
        if ((local_e0 == param_2) && (local_e7 == '\x04')) {
          if (uStack_80 >> 0x3c < 0xf) {
            pcVar10 = *(code **)(param_4 + 0x38);
            FUN_100008184(local_88,uStack_80);
            pcVar5 = (code *)auStack_128;
            (*pcVar10)(pcVar5,param_3,param_4);
            __s10Foundation4DataV6appendyyACF(uVar3,uVar4);
            (*pcVar5)(auStack_128,0);
            FUN_100006cc8(uVar3,uVar4);
          }
          lVar9 = unaff_x20[1];
          lVar2 = lVar9 - local_100;
          if (SBORROW8(lVar9,local_100)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100501970);
            (*pcVar5)();
          }
          if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100501974);
            (*pcVar5)();
          }
          *unaff_x20 = *unaff_x20 + lVar2;
          unaff_x20[1] = lVar9 - lVar2;
          if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100501978);
            (*pcVar5)();
          }
          unaff_x20[0xf] = lVar8;
          if (unaff_x20[0xd] < lVar8) {
            __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                      ("Fatal error",0xb,2,&DAT_d00000000000003b,0x80000001008bc970,
                       "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005019c4);
            (*pcVar5)();
          }
          FUN_100506304(auStack_108);
          uVar7 = 1;
          goto LAB_100501944;
        }
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar6,0,0);
        *puVar6 = 1;
        _swift_willThrow();
      }
      FUN_100506304(auStack_108);
      uVar7 = extraout_w8_00;
    }
  }
  else {
    uVar7 = 0;
  }
LAB_100501944:
  return uVar7 & 1;
}

